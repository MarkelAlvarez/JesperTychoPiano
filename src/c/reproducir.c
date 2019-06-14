#include "../h/liburutegiak.h"

void erreproduzitu(JOKO_ELEMENTUA menua, int aukera)
{
	JOKO_ELEMENTUA pianoa;
	char str[MAX], path[MAX], c = 0;
	int tekla = 0, boi, posX = 0, irten = 0;
	NOTA *burua = NULL;
	FILE *fitxategia;

	toggleMusic();

	fitxIzena(str);
	strcat(str, ".txt");

	strcpy(path, "./media/partiturak/");
	strcat(path,str);
	if ((fitxategia = fopen(path, "r")) == NULL) 
	{
		pianoa.id = irudiaKargatu("./media/img/Errorea.png");
		irudiaMugitu(pianoa.id, 0, 0);
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		SDL_Delay(2000);
		irudiaKendu(pianoa.id);
		toggleMusic();
	}
	else
	{
		carga(&pianoa, aukera);

		pianoa.id = irudiaKargatu("./media/img/tocar.png");
		irudiaMugitu(pianoa.id, 0, 0);
		pianoa.tocado = irudiaKargatu("./media/img/clave.png");
		irudiaMugitu(pianoa.tocado, 1000, 1000);

		while (c != EOF)
		{
			c = fgetc(fitxategia);
			sartuNotakZerrendan(&burua, c);
		}
		fclose(fitxategia);

		while ((tekla != TECLA_ESCAPE) && (irten != 1))
		{
			if (burua->ptrHurrengoa != NULL)
			{
				tekla = burua->nota;
				burua = burua->ptrHurrengoa;
				if ((tekla >= TECLA_a - 32) && (tekla <= TECLA_z - 32))
				{
					boi = teklaAukeraSos(pianoa, tekla + 32, &posX);
					irudiaMugitu(pianoa.tocado, posX, 262);
				}
				if (((tekla >= TECLA_a) && (tekla <= TECLA_z)) || ((tekla >= TECLA_0) && (tekla <= TECLA_9)))
				{
					boi = teklaAukera(pianoa, tekla, &posX);
					irudiaMugitu(pianoa.tocado, posX, 330);
				}
				if (tekla == ' ')
				{
					SDL_Delay(10);
				}
			}
			else
			{
				irten = 1;
			}
			pantailaGarbitu();
			irudiakMarraztu();
			pantailaBerriztu();
			tekla = ebentuaJasoGertatuBada();
		}
		kenduDena(&burua);
		audioTerminate();
		toggleMusic();
		irudiaKendu(pianoa.id);
		irudiaKendu(pianoa.tocado);
	}
}

NOTA* sartuNotaBat(char c)
{
	NOTA *ptrAux = NULL;

	ptrAux = (NOTA*)malloc(sizeof(NOTA));

	ptrAux->nota = c;
	ptrAux->ptrHurrengoa = NULL;

	return ptrAux;
}

void sartuNotakZerrendan(NOTA **burua, char c)
{
	NOTA* ptrAux = NULL;
	NOTA* berria = NULL;

	if (*burua == NULL)
	{
		*burua = sartuNotaBat(c);
	}
	else
	{
		ptrAux = sartuNotaBat(c);
		berria = *burua;
		while (berria->ptrHurrengoa != NULL)
		{
			berria = berria->ptrHurrengoa;
		}
		berria->ptrHurrengoa = ptrAux;
	}
}

void kenduDena(NOTA **burua)
{
	NOTA *ptraux = NULL;

	while (*burua != NULL)
	{
		ptraux = *burua;
		*burua = ptraux->ptrHurrengoa;
		free(ptraux);
		ptraux = NULL;
	}
}
