#include <SDL2/SDL.h>
#include <stdio.h>

#define SCREEN_WIDTH 1280 
#define SCREEN_HEIGHT 720

void CreateBox(SDL_Renderer *renderer, int xPos, int yPos, int width, int height, bool isFill)
{
    SDL_Rect rect;
    rect.x = xPos;
    rect.y = yPos;
    rect.w = width;
    rect.h = height;

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    if(isFill)
        SDL_RenderFillRect(renderer, &rect);

    SDL_RenderDrawRect(renderer, &rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderPresent(renderer);
}


int main(int argc, char** argv)
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("Error: SDL failed to initialize\nSDL Error: '%s'\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Game Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    if(!window){
        printf("Error: Failed to open window\nSDL Error: '%s'\n", SDL_GetError());
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(!renderer){
        printf("Error: Failed to create renderer\nSDL Error: '%s'\n", SDL_GetError());
        return 1;
    }
    
    SDL_RenderClear(renderer);

    CreateBox(renderer, 20,20,10,20, true);
    CreateBox(renderer, 0,0,100,200, false);
    bool running = true;
    while(running){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_QUIT:
                    running = false;
                    break;

                default:
                    break;
            }
        }

        //SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        //SDL_RenderClear(renderer);

        //SDL_RenderPresent(renderer);
    }

    return 0;
}