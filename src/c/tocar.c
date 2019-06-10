#include "../h/liburutegiak.h"

void tocar(JOKO_ELEMENTUA menua, int aukera)
{
	int tekla = 0, kont = 0, x = 500, y = 0, posX = 0;
	const Uint8 * state = SDL_GetKeyboardState(NULL);
	JOKO_ELEMENTUA pianoa;

	toggleMusic();
	carga(&pianoa, aukera);

	pianoa.id = irudiaKargatu("./media/img/tocar.png");
	irudiaMugitu(pianoa.id, 0, 0);
	pianoa.tocado = irudiaKargatu("./media/img/clave.png");
	irudiaMugitu(pianoa.tocado, 1000, 1000);
	irudiakMarraztu();
	pantailaBerriztu();

	do{
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		if ((!state[SDL_SCANCODE_SPACE]) && (tekla > 47))
		{
			y = teklaAukera(pianoa, tekla, &posX);
			irudiaMugitu(pianoa.tocado, posX, 330);
			if (kont >= 5)
			{
				irudiaKendu(pianoa.negras[0]);
				irudiaKendu(pianoa.negras[1]);
				irudiaKendu(pianoa.negras[2]);
				irudiaKendu(pianoa.negras[3]);
				irudiaKendu(pianoa.negras[4]);
				x = 500;
				kont = 0;
			}
			if (y == DO)
			{
				pianoa.negras[kont] = irudiaKargatu("./media/img/notaDo.png");
				irudiaMugitu(pianoa.negras[kont], x, y);
				x += 60;
				kont++;
			}
			if ((y < DO) && (y != 0))
			{
				pianoa.negras[kont] = irudiaKargatu("./media/img/nota.png");
				irudiaMugitu(pianoa.negras[kont], x, y);
				x += 60;
				kont++;
			}
			if (y == 0)
			{
				y = 1000;
			}
		}
		if ((state[SDL_SCANCODE_SPACE]) && (tekla > 47))
		{
			y = teklaAukeraSos(pianoa, tekla, &posX);
			irudiaMugitu(pianoa.tocado, posX, 262);
			if (kont >= 5)
			{
				irudiaKendu(pianoa.negras[0]);
				irudiaKendu(pianoa.negras[1]);
				irudiaKendu(pianoa.negras[2]);
				irudiaKendu(pianoa.negras[3]);
				irudiaKendu(pianoa.negras[4]);
				x = 500;
				kont = 0;
			}
			if (y == DO)
			{
				pianoa.negras[kont] = irudiaKargatu("./media/img/sostenidoDo.png");
				irudiaMugitu(pianoa.negras[kont], x, y);
				x += 60;
				kont++;
			}
			if ((y < DO) && (y != 0))
			{
				pianoa.negras[kont] = irudiaKargatu("./media/img/sostenido.png");
				irudiaMugitu(pianoa.negras[kont], x, y);
				x += 60;
				kont++;
			}
			if (y == 0)
			{
				y = 1000;
			}
		}
		/*if (state[SDL_SCANCODE_TAB])
		{
			musikaAukeratu(&pianoa);
		}*/
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != TECLA_ESCAPE);

	irudiaKendu(pianoa.id);
	irudiaKendu(pianoa.tocado);
	audioTerminate();
	toggleMusic();
}

/*void musikaAukeratu(JOKO_ELEMENTUA* pianoa)
{
	char str[MAX], path[MAX];

	irudiaKendu(pianoa->id);

	fitxIzena(str);
	strcat(str, ".wav");

	strcpy(path, "./media/sounds/fondo/");
	strcat(path, str);

	pianoa->music = Mix_LoadMUS(path);
	Mix_PlayMusic(pianoa->music, -1);

	irudiaKendu(pianoa->id);
	pianoa->id = irudiaKargatu("./media/img/tocar.png");
	irudiaMugitu(pianoa->id, 0, 0);
}*/
