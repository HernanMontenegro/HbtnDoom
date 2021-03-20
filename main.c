#include "header.h"

int main(void)
{
	SDL_Inst instance;

	if (init_instance(&instance) != 0)
		return (1);
	return (0);
}
