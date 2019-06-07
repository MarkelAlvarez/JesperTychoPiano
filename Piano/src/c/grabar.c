#include "../h/liburutegiak.h"

void grabatu(JOKO_ELEMENTUA menua, int aukera)
{
	const Uint8 * state = SDL_GetKeyboardState(NULL);
	int tekla = 0, kont = 0, x = 500, y = 0, posX = 0;
	char fitxIz[MAX], path[MAX], c;
	JOKO_ELEMENTUA pianoa;
	FILE* fitx;
	
	toggleMusic();
	irudiaKendu(menua.id);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();



	fitxIzena(fitxIz);
	strcat(fitxIz, ".txt");

	carga(&pianoa, aukera);

	pianoa.id = irudiaKargatu("./media/img/tocar.png");
	irudiaMugitu(pianoa.id, 0, 0);
	pianoa.tocado = irudiaKargatu("./media/img/clave.png");
	irudiaMugitu(pianoa.tocado, 1000, 1000);
	
	strcpy(path, "./media/partiturak/");
	strcat(path,fitxIz);
	if ((fitx = fopen(path, "w+")) == NULL)
	{
		printf("Ezin izan da fitxategia ireki.\n");
		toggleMusic();
	}
	else
	{
		do {
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
					irudiaMugitu(pianoa.negras[kont], x, y);
				}
				c = tekla;
			}
			if ((state[SDL_SCANCODE_SPACE]) && (tekla > 47))
			{
				y = teklaAukeraSos(pianoa, tekla, &posX);
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
				c = tekla - 32;
			}
			if (((tekla >= 'A') && (tekla <= 'Z')) || ((tekla >= 'a') && (tekla <= 'z')) || ((tekla >= '0') && (tekla <= '9')))
			{
				fprintf(fitx, "%c", c);
			}
			else
			{
				fprintf(fitx, " ");
				SDL_Delay(10);
			}
			tekla = ebentuaJasoGertatuBada();
		} while (tekla != TECLA_ESCAPE);

		fclose(fitx);
		irudiaKendu(pianoa.id);
		irudiaKendu(pianoa.tocado);

		while (kont >= 0)
		{
			irudiaKendu(pianoa.negras[kont]);
			kont--;
		}
		toggleMusic();
	}
}

void fitxIzena(char str1[])
{
	JOKO_ELEMENTUA letra;
	int tekla = 0, kont = 0, posX = 400, y = 50, str[MAX];

	letra.id = irudiaKargatu("./media/img/izena.png");
	irudiaMugitu(letra.id, 0, 0);
	do
	{
		pantailaGarbitu();
		irudiakMarraztu();
		if (tekla == TECLA_a)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/a.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'a';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_b)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/b.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'b';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_c)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/c.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'c';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_d)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/d.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'd';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_e)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/e.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'e';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_f)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/f.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'f';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_g)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/g.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'g';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_h)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/h.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'h';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_i)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/i.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'i';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_j)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/j.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'j';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_k)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/k.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'k';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_l)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/l.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'l';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_m)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/m.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'm';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_n)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/n.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'n';
			posX += 29;
			kont++;
		}
		/*if (tekla == TECLA_ñ)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/ñ.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'ñ';
			posX += 29;
			kont++;
		}*/
		if (tekla == TECLA_o)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/o.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'o';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_p)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/p.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'p';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_q)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/q.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'q';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_r)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/r.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'r';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_s)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/s.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 's';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_t)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/t.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 't';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_u)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/u.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'u';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_v)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/v.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'v';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_w)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/w.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'w';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_x)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/x.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'x';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_y)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/y.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'y';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_z)
		{
			letra.letra[kont] = irudiaKargatu("./media/img/letras/z.png");
			irudiaMugitu(letra.letra[kont], posX, y);
			str[kont] = 'z';
			posX += 29;
			kont++;
		}
		if (tekla == TECLA_BORRAR)
		{
			kont--;
			irudiaKendu(letra.letra[kont]);
			posX -= 29;			
		}
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while ((tekla != TECLA_RETURN) && (kont != MAX));

	str[kont] = '\0';
	str1[kont] = str[kont];
	kont--;

	while (kont >= 0)
	{
		str1[kont] = str[kont];
		irudiaKendu(letra.letra[kont]);
		kont--;
	}
	irudiaKendu(letra.id);
}
