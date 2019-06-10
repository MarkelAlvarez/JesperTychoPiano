#include "../h/liburutegiak.h"

POSIZIOA saguPos;
SDL_Event event;

POSIZIOA saguarenPosizioa()
{
	return saguPos;
}

int ebentuaJasoGertatuBada()
{
	int ret = 0;

	if (SDL_PollEvent(&event))
	{
		/* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
		switch (event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
				case SDLK_LEFT:
					ret = TECLA_LEFT;
					break;
				case SDLK_RIGHT:
					ret = TECLA_RIGHT;
					break;
				case SDLK_DOWN:
					ret = TECLA_DOWN;
					break;
				case SDLK_UP:
					ret = TECLA_UP;
					break;
				default:
					ret = event.key.keysym.sym;
					break;
				}
				break;
			case SDL_QUIT:
				ret = GERTAERA_IRTEN;
				break;
			case SDL_MOUSEBUTTONUP:
				switch (event.button.button) {
				case SDL_BUTTON_LEFT:
					ret = SAGU_BOTOIA_EZKERRA;
					break;
				case SDL_BUTTON_RIGHT:
					ret = SAGU_BOTOIA_ESKUMA;
					break;
				default:
					ret = event.button.button;
					break;
				}
				break;
			case SDL_MOUSEMOTION:
				saguPos.x = event.motion.x;
				saguPos.y = event.motion.y;
				ret = SAGU_MUGIMENDUA;
				break;
			default:
				break;
		}
	}
	return ret;
}