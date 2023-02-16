// SDL2 render functions
// (c) 2018 Jani Nykänen

#ifndef __RENDER__
#define __RENDER__
#endif // __RENDER__

#include "SDL2/SDL.h"

// Initialize renderer
int init_renderer(int w, int h, int scale, bool fullscreen);
// Clear screen
void clear_screen();
// Present screen
void present_screen();
// Set draw color
void set_draw_color(int r, int g, int b);
// Draw a pixel
void draw_pixel(int x, int y);