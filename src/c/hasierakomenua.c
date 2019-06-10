#include "../h/liburutegiak.h"

int hasierakoMenua(int lehenKarga, JOKO_ELEMENTUA menua)
{
	int tekla = 0;

	if (lehenKarga)
	{
		lehenKarga = 0;
	}
	menua.id = irudiaKargatu("./media/img/menu.png");
	irudiaMugitu(menua.id, 0, 0);

	do
	{
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != SAGU_BOTOIA_EZKERRA);

	lehenKarga = aukerak(menua, lehenKarga);	

	return lehenKarga;
}

int aukerak(JOKO_ELEMENTUA menua, int lehenKarga)
{
	int inst = 0;
	POSIZIOA SaguPos;

	SaguPos = saguarenPosizioa();

	if ((SaguPos.x > 599) && (SaguPos.x < 648) && (SaguPos.y > 26) && (SaguPos.y < 74))
	{
		inst = instrumentua(menua);
		if (inst != 5)
		{
			tocar(menua, inst);
		}
		lehenKarga = 1;
	}
	if ((SaguPos.x > 442) && (SaguPos.x < 491) && (SaguPos.y > 26) && (SaguPos.y < 74))
	{
		inst = instrumentua(menua);
		if (inst != 5)
		{
			grabatu(menua, inst);
		}
		lehenKarga = 1;
	}
	if ((SaguPos.x > 755) && (SaguPos.x < 806) && (SaguPos.y > 26) && (SaguPos.y < 74))
	{
		inst = instrumentua(menua);
		if (inst != 5)
		{
			erreproduzitu(menua, inst);
		}
		lehenKarga = 1;
	}
	if ((SaguPos.x > 437) && (SaguPos.x < 487) && (SaguPos.y > 84) && (SaguPos.y < 132))
	{
		partekatu(menua);
		lehenKarga = 1;
	}
	if ((SaguPos.x > 598) && (SaguPos.x < 650) && (SaguPos.y > 84) && (SaguPos.y < 132))
	{
		nolajo(menua);
		lehenKarga = 1;
	}
	
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();

	return lehenKarga;
}

void nolajo(JOKO_ELEMENTUA menua)
{
	int tekla = 0;

	irudiaKendu(menua.id);
	menua.id = irudiaKargatu("./media/img/nolajo.png");
	irudiaMugitu(menua.id, 0, 0);
	do
	{
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != TECLA_ESCAPE);
	irudiaKendu(menua.id);
}

int instrumentua(JOKO_ELEMENTUA menua)
{
	int aukera = 0, tekla;
	POSIZIOA SaguPos;

	irudiaKendu(menua.id);
	menua.id = irudiaKargatu("./media/img/instrumentos.png");
	irudiaMugitu(menua.id, 0, 0);

	do
	{
		SaguPos = saguarenPosizioa();
		if ((SaguPos.x > 424) && (SaguPos.x < 471) && (SaguPos.y > 29) && (SaguPos.y < 75))
		{
			aukera = 1;
		}
		if ((SaguPos.x > 535) && (SaguPos.x < 600) && (SaguPos.y > 26) && (SaguPos.y < 80))
		{
			aukera = 2;
		}
		if ((SaguPos.x > 664) && (SaguPos.x < 716) && (SaguPos.y > 25) && (SaguPos.y < 78))
		{
			aukera = 3;
		}
		if ((SaguPos.x > 776) && (SaguPos.x < 838) && (SaguPos.y > 31) && (SaguPos.y < 75))
		{
			aukera = 4;
		}
		if ((SaguPos.x > 756) && (SaguPos.x < 804) && (SaguPos.y > 84) && (SaguPos.y < 132))
		{
			aukera = 5;
		}

		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != SAGU_BOTOIA_EZKERRA);
	irudiaKendu(menua.id);

	return aukera;
}

int irten(POSIZIOA SaguPos)
{
	int irten = 0;

	if ((SaguPos.x > 756) && (SaguPos.x < 804) && (SaguPos.y > 84) && (SaguPos.y < 132))
	{
		irten = 1;
	}

	return irten;
}