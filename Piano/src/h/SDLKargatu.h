#ifndef SDLKARGATU_H
#define SDLKARGATU_H
#define _CRT_SECURE_NO_WARNINGS

#include "SDL2/SDL.h"
#include "SDL2/SDL_mixer.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"

#define SCREEN_WIDTH  1246
#define SCREEN_HEIGHT  379
#define MAX_IMG 100
#define MAX_SOUNDS 64
#define MAX 128

//IRUDIAK
typedef struct Img
{
	int id;
	SDL_Surface* imagen;
	SDL_Texture* texture;
	SDL_Rect dest;
}IMG;

int irudiaKargatu(char *fileName);
void irudiaMugitu(int numImg, int x, int y);
void irudiakMarraztu();
void irudiaKendu(int id);
int irudiarenPosizioaAurkitu(int id);
int irudiaSortu(char* imgName);
void pantailaGarbitu();
int irudiaMarraztu(SDL_Texture* texture, SDL_Rect *pDest);
void arkatzKoloreaEzarri(int red, int green, int blue);
void pantailaBerriztu();
void zuzenaMarraztu(int x1, int y1, int x2, int y2);

//BIDEOA
SDL_Renderer* getRenderer();
int SDLHasi();
void denaItxi();

//SOINUA
int loadSound(char *fileName);
int loadTheMusic(char *fileName);
int playSound(int idSound);
int playMusic();
void musicUnload();
void soundsUnload();
void toggleMusic();
void audioTerminate();

//TESTUA
void textuaGaitu();
void textuaIdatzi(int x, int y, char *str);
void textuaDesgaitu();

#endif
