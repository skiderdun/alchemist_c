

alchemist: main.c
	gcc main.c -c -o alchemist.o 
	gcc alchemist.o -o alchemist -lmingw32 -lSDL2main -lSDL2 -LSDL2/x86_64-w64-mingw32/lib -I./SDL2/x86_64-w64-mingw32/include
