#ifndef OURTYPES_H
#define OURTYPES_H

#include "liburutegiak.h"

typedef struct S_JOKO_ELEMENTUA
{
	int id, tocado;
	Mix_Music *music;
	int nota[60];
	int letra[50];
	int negras[5];
}JOKO_ELEMENTUA;

typedef struct S_NOTA
{
	char nota;
	struct S_NOTA *ptrHurrengoa;
}NOTA;

#endif