

alchemist: main.c
	gcc main.c -c -o alchemist.o -lmingw32 -lSDL2main -lSDL2 -LSDL2-2.26.3/x86_64-w64-mingw32/lib -ISDL2-2.26.3/x86_64-w64-mingw32/include
	gcc alchemist.o -o alchemist -lmingw32 -lSDL2main -lSDL2 -LSDL2-2.26.3/x86_64-w64-mingw32/lib -ISDL2-2.26.3/x86_64-w64-mingw32/include
