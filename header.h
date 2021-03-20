#ifndef HEADER_H
#define HEADER_H

#include <SDL2/SDL.h>
#include <stdio.h>

/* Struct for window instance  */
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Inst;

int init_instance(SDL_Inst *);

#endif /* HEADER_H  */
