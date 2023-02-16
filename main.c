
// a small rouglike game with a procedurally generated map
// and a simple AI
// written in C using SDL2
// Includes a chemistry simulation wich allows the player to create sophisticated alchemical compounds
// 1/15/2023
// by: Tommy Weiss

#include <stdio.h>
#include <stdlib.h>

#include "SDL2/SDL.h"

static SDL_Window *window;
static SDL_Renderer *renderer;

// test area

// end test area

/* Call this instead of exit(), so we can clean up SDL: atexit() is evil. */
static void
quit(int rc)
{
    SDL_Quit();
    exit(rc);
}


int main(int argc, char **argv)

{    
    // start SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL_Init Error: %s /n", SDL_GetError());
        return 1;
    }
    
    // create window
    window = SDL_CreateWindow("RougeLike", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("SDL_CreateWindow Error: %s /n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    
    return 1;
}