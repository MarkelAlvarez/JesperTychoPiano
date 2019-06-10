#include "../h/liburutegiak.h"

//Testua
TTF_Font *font = 0;
//Bideoa
SDL_Window* window = NULL;
SDL_Surface* screenSurface = NULL;
SDL_Surface* HelloWorld = NULL;
SDL_Renderer* gRenderer;
int colorR, colorG, colorB;
//Musika
int soinuKop = 0;
Mix_Chunk* soinuak[MAX_SOUNDS];
Mix_Music * musika = NULL;
//Irudiak
IMG irudiak[MAX_IMG];
int irudiKop = 0;
int id = 0;

SDL_Renderer* getRenderer()
{
	return gRenderer;
}

int SDLHasi()
{
	int hasieratua = 0;

	if (TTF_Init() < 0)
	{
		printf("SDL_TTF couldn't initialize!, SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		textuaGaitu();
	}
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	//Initialize SDL_mixer
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
	{
		printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
	}
	else
	{
		musika = Mix_LoadMUS("./media/sounds/fondoMii.wav");
		if (musika == NULL)
		{
			printf("Ezin izan da musika kargatu. SDL_mixer Error: %s\n", Mix_GetError());
		}
		Mix_PlayMusic(musika, -1);
		window = SDL_CreateWindow("Jesper Tycho Piano", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		gRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        HelloWorld = IMG_Load("./media/img/icon.png");
		SDL_SetWindowIcon(window, HelloWorld);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			screenSurface = SDL_GetWindowSurface(window);
			hasieratua = 1;
		}
	}

	return hasieratua;
}

void denaItxi()
{
	Mix_FreeMusic(musika);
	musika = NULL;
	SDL_FreeSurface(HelloWorld);
	HelloWorld = NULL;
	SDL_DestroyWindow(window);
	window = NULL;
	Mix_Quit();
	TTF_Quit();
	SDL_Quit();
}

/*IRUDIAK*/
int irudiaKargatu(char *fileName)
{
	int colorkey;
	SDL_Surface* surface;
	SDL_Renderer* gRenderer = getRenderer();

	if (irudiKop < MAX_IMG)
	{
		surface = IMG_Load(fileName);
		if (surface == NULL)
		{
			return -1;
		}
		else
		{
			colorkey = SDL_MapRGB(surface->format, 255, 0, 255);
			SDL_SetColorKey(surface, SDL_TRUE, colorkey);
			irudiak[irudiKop].texture = SDL_CreateTextureFromSurface(gRenderer, surface);
			irudiak[irudiKop].dest.x = irudiak[irudiKop].dest.y = 0;
			irudiak[irudiKop].dest.w = surface->w;
			irudiak[irudiKop].dest.h = surface->h;
			SDL_FreeSurface(surface);
			irudiak[irudiKop].id = id;
			irudiKop++;
			id++;
		}
	}
	else
	{
		printf(" Has superado el maximo de imagenes por aplicación. Para aumentar modifica imagen.h\n");
		id = 0;
	}

	return id - 1;
}

void irudiaMugitu(int numImg, int x, int y)
{
	int id = 0;

	id = irudiarenPosizioaAurkitu(numImg);

	irudiak[id].dest.x = x;
	irudiak[id].dest.y = y;
}

void irudiakMarraztu()
{
	int i = 0;

	for (i = 0; i < irudiKop; i++)
	{
		irudiaMarraztu(irudiak[i].texture, &irudiak[i].dest);
	}
}

void irudiaKendu(int id)
{
	int i = 0, pos = 0;

	pos = irudiarenPosizioaAurkitu(id);
	SDL_DestroyTexture(irudiak[pos].texture);
	for (i = pos; i < irudiKop; i++)
	{

		irudiak[i] = irudiak[i + 1];
	}

	irudiKop--;
}

int irudiarenPosizioaAurkitu(int id)
{
	int i = 0;

	for (i = 0; i < irudiKop; i++)
	{
		if (id == irudiak[i].id) return i;
	}
	return -1;
}

void pantailaGarbitu()
{
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(gRenderer);
}

int irudiaSortu(char* imgName)
{
	int img = -1;

	img = irudiaKargatu(imgName);
	irudiaMugitu(img, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();

	return img;
}

int irudiaMarraztu(SDL_Texture* texture, SDL_Rect *pDest)
{
	SDL_Rect src;

	src.x = 0;
	src.y = 0;
	src.w = pDest->w;
	src.h = pDest->h;
	SDL_RenderCopy(gRenderer, texture, &src, pDest);
	
	return 0;
}

void arkatzKoloreaEzarri(int red, int green, int blue)
{
	colorR = red;
	colorG = green;
	colorB = blue;
}

void pantailaBerriztu()
{
	SDL_RenderPresent(gRenderer);
}

void zuzenaMarraztu(int x1, int y1, int x2, int y2)
{
	SDL_SetRenderDrawColor(gRenderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawLine(gRenderer, x1, y1, x2, y2);
}

/*TEXT*/
void textuaGaitu()
{
	font = TTF_OpenFontIndex("./media/typo/regular.ttf", 20, 0);
	if (!font)
	{
		printf("TTF_OpenFontIndex: %s\n", TTF_GetError());
	}
}

void textuaIdatzi(int x, int y, char *str)
{
	SDL_Surface* textSurface;
	SDL_Texture *mTexture;
	SDL_Color textColor = { 0, 0, 0 };
	SDL_Rect src, dst;
	SDL_Renderer* gRenderer;

	if (font == 0)
	{
		return;
		//textuaGaitu();
	}
	gRenderer = getRenderer();
	textSurface = TTF_RenderText_Solid(font, str, textColor);
	mTexture = SDL_CreateTextureFromSurface(gRenderer, textSurface);
	src.x = 0; dst.x = x;
	src.y = 0; dst.y = y;
	src.w = dst.w = textSurface->w;
	src.h = dst.h = textSurface->h;
	SDL_RenderCopy(gRenderer, mTexture, &src, &dst);
	SDL_FreeSurface(textSurface);
	SDL_DestroyTexture(mTexture);
}

void textuaDesgaitu()
{
	if (font != 0)
	{
		TTF_CloseFont(font);
		font = 0;
		SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
		SDL_RenderClear(gRenderer);
		irudiakMarraztu();
	}
}

/*SOINUA*/
int loadSound(char *fileName)
{
	if (soinuKop == MAX_SOUNDS)
	{
		return -1;
	}
	if ((soinuak[soinuKop] = Mix_LoadWAV(fileName)) == NULL)
	{
		return -1;
	}
	soinuKop++;

	return soinuKop - 1;
}

int loadTheMusic(char *fileName)
{
	int wasPlaying = 0;

	if (musika != NULL)
	{
		wasPlaying = (Mix_PlayingMusic() != 1);
		Mix_HaltMusic();
		//Mix_FreeMusic(musika);
	}
	if ((musika = Mix_LoadMUS(fileName)) == NULL)
	{
		return 0;
	}
	if (wasPlaying)
	{
		Mix_PlayMusic(musika, -1);
	}

	return 1;
}

int playSound(int idSound)
{
	static int i = 0;

	if ((idSound <= 0) && (idSound >= soinuKop))
	{
		return -1;
	}
	Mix_PlayChannel(i, soinuak[idSound], 0);
	i++;
	if (i > 2)
	{
		i = 0;
	}
	
	return idSound;
}

int playMusic()
{
	if (musika!= NULL)
	{
		Mix_PlayMusic(musika, -1);
		return 1;
	}

	return 0;
}

void toggleMusic()
{
	if (musika != NULL)
	{
		if (Mix_PlayingMusic() != 0)
		{
			if (Mix_PausedMusic()) 
			{
				Mix_ResumeMusic();
			}
			else
			{
				Mix_PauseMusic();
			}
		}
		else
		{
			playMusic();
		}
	}
}

void musicUnload()
{
	if (musika != NULL)
	{
		Mix_HaltMusic();
		//Mix_FreeMusic(musika);
	}
}

void soundsUnload()
{
	int i;

	for (i = 0; i < soinuKop; i++)
	{
		Mix_FreeChunk(soinuak[i]);
		soinuak[i] = NULL;
	}
	soinuKop = 0;
}

void audioTerminate()
{
	Mix_HaltChannel(-1);
	soundsUnload();
	musicUnload();
}
