#include "../h/liburutegiak.h"

int main(int argc, char const *argv[])
{
	int irtenda = 0, errorea, lehenKarga = 1;
	POSIZIOA SaguPos;
	JOKO_ELEMENTUA menua;

	errorea = SDLHasi();
	if (errorea == 0)
	{
		printf(" Erroreak gertatu dira.");
	}
	else
	{
		do
		{
			textuaGaitu();
			menua.id = irudiaKargatu("./media/img/menu.png");
			irudiakMarraztu();
			pantailaBerriztu();
			lehenKarga = hasierakoMenua(lehenKarga, menua);
			SaguPos = saguarenPosizioa();
			irtenda = irten(SaguPos);
		} while (!irtenda);
		denaItxi();
	}
	
	return 0;
}
