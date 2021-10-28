all: compile play

compile:
	g++ -Isrc/Include -Lsrc/lib -o Game main.cpp -lmingw32 -lSDL2main -lSDL2

play:
	./Game