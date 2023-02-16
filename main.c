// a small rouglike game with a procedurally generated map
// and a simple AI
// written in C using SDL2
// Includes a chemistry simulation wich allows the player to create sophisticated alchemical compounds
// 1/15/2023
// by: Tommy Weiss

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "SDL2/SDL.h"

#include "render.h"

static SDL_Window *window;
static SDL_Renderer *renderer;

// test area

// end test area

// quit function
void quit(int code)
{
    SDL_DestroyWindow(window);
    SDL_Quit();
    exit(code);
}

// Window creation and event loop
int main(int argc, char **argv)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "SDL_Init() failed: %s \n", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow("RougeLike", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        fprintf(stderr, "SDL_CreateWindow() failed: %s \n", SDL_GetError());
        quit(2);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL) {
        fprintf(stderr, "SDL_CreateRenderer() failed: %s \n", SDL_GetError());
        quit(3);
    }
  
    while (1) // (SDL_WaitEvent(&event) && event.type != SDL_QUIT)
    {
        SDL_Event event;
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
        // event loop
        // render a pixel to the screen

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

    }
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 1;
    }


