#ifndef JOKOBARRUKOAUKERAK_H
#define JOKOBARRUKOAUKERAK_H

#include "liburutegiak.h"

int teklaAukera(JOKO_ELEMENTUA pianoa, int tekla, int *xt);
int teklaAukeraSos(JOKO_ELEMENTUA pianoa, int tekla, int *xt);
void carga(JOKO_ELEMENTUA *pianoa, int aukera);

#endif