#include "header.h"

int main(void)
{
	SDL_Window *window;
	SDL_Renderer *renderer;

	/* Initialize SDL  */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "Unable to initialize SDL:  %s\n", SDL_GetError());
		return (1);
	}
	/* Create a new Window Instance  */
	window = SDL_CreateWindow("SDL2 ME GUSTA EL PITO", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
	if (!window)
	{
		fprintf(stderr, "SDL_CreateWindow Error:  %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	/* Create a new Renderer instance linked to the Window  */
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (!renderer)
	{
		SDL_DestroyWindow(window);
		fprintf(stderr, "SDL_CreateRenderer Error:  %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	return (0);
}
