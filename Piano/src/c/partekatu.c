#include "../h/liburutegiak.h"

void partekatu(JOKO_ELEMENTUA menua)
{
	JOKO_ELEMENTUA ftp;
	int tekla = 0;

	toggleMusic();

	irudiaKendu(menua.id);
	irudiakMarraztu();
	pantailaBerriztu();
	ftp.id = irudiaKargatu("./media/img/FTPAukera.png");
	irudiaMugitu(ftp.id, 0, 0);
	
	do
	{
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != SAGU_BOTOIA_EZKERRA);
	FTPaukerak();
	irudiaKendu(ftp.id);
	toggleMusic();
}

void FTPaukerak()
{
	int tekla = 0, irten = 0;
	char fitxIz[MAX];
	POSIZIOA SaguPos;

	do {
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();

		SaguPos = saguarenPosizioa();
		if ((SaguPos.x > 480) && (SaguPos.x < 565) && (SaguPos.y > 35) && (SaguPos.y < 125))
		{
			fitxAukera(fitxIz);
			irten = 1;
		}
		else if ((SaguPos.x > 687) && (SaguPos.x < 766) && (SaguPos.y > 35) && (SaguPos.y < 125))
		{
			fitxIzena(fitxIz);
			strcat(fitxIz, ".txt");
			igo(fitxIz);
			irten = 1;
		}
		tekla = ebentuaJasoGertatuBada();
	} while ((tekla != TECLA_ESCAPE) && (irten != 1));
}

//DESKARGATU
void fitxAukera(char *fitxIz)
{
	int fitxKop = 1, x = 402, y = 0;
	JOKO_ELEMENTUA karga;
	FITXATEGIAK fitx[MAX], *burua = NULL;

	karga.id = irudiaKargatu("./media/img/Hutzik.png");
	irudiaMugitu(karga.id, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();

	FTPDirektorioa(fitx, &burua);
	while ((burua->izena != NULL))
	{
		if (fitxKop <= 6)
		{
			y += 20;
			fitxKop++;
			textuaIdatzi(x, y, burua->izena);
			burua = burua->pHurrengoa;
		}
		else if ((fitxKop > 6))
		{
			x = 635;
			y = 0;
			do
			{
				y += 20;
				fitxKop++;
				textuaIdatzi(x, y, burua->izena);
				burua = burua->pHurrengoa;
			} while ((fitxKop < 12) && ((burua->izena != NULL)));
		}
	}
	textuaIdatzi(x, 120, "BESTE FITXATEGI BAT");
	pantailaBerriztu();

	fitxKoordenatuak(fitxIz, fitx);
	deskargatu(fitxIz);

	kenduGuztia(&burua);
	irudiaKendu(karga.id);
}

void FTPDirektorioa(FITXATEGIAK *fitx, FITXATEGIAK **burua)
{
	int fitxKop = 0;
	char str[MAX];
	JOKO_ELEMENTUA karga;
	FILE *fitxategia;

	strcpy(str, "curl -ls ftp://piano:proiektua@35.181.144.107/ > ./media/partiturak/list.txt");
	system(str);

	if ((fitxategia = fopen("./media/partiturak/list.txt", "r")) == NULL) 
	{
		karga.id = irudiaKargatu("./media/img/Errorea.png");
		irudiaMugitu(karga.id, 0, 0);
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
		SDL_Delay(2000);
		irudiaKendu(karga.id);
		toggleMusic();
	}
	else
	{
		while (fscanf(fitxategia, "%s\n", fitx[fitxKop].izena) != -1)
		{
			sartuFitxZerrendan(burua, fitx[fitxKop].izena);
			fitxKop++;
		}
		//strcpy(fitx[fitxKop+1].izena, "AZKENA");
		fclose(fitxategia);
	}
}

void fitxKoordenatuak(char *fitxIz, FITXATEGIAK *fitx)
{
	int tekla = 0, aukera;
	POSIZIOA SaguPos;

	do
	{
		SaguPos = saguarenPosizioa();
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 20) && (SaguPos.y < 40))
		{
			aukera = 0;
		}
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 40) && (SaguPos.y < 60))
		{
			aukera = 1;
		}
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 60) && (SaguPos.y < 80))
		{
			aukera = 2;
		}
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 80) && (SaguPos.y < 100))
		{
			aukera = 3;
		}
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 100) && (SaguPos.y < 120))
		{
			aukera = 4;
		}
		if ((SaguPos.x > 400) && (SaguPos.x < 630) && (SaguPos.y > 120) && (SaguPos.y < 140))
		{
			aukera = 5;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 20) && (SaguPos.y < 40))
		{
			aukera = 6;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 40) && (SaguPos.y < 60))
		{
			aukera = 7;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 60) && (SaguPos.y < 80))
		{
			aukera = 8;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 80) && (SaguPos.y < 100))
		{
			aukera = 9;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 100) && (SaguPos.y < 120))
		{
			aukera = 10;
		}
		if ((SaguPos.x > 635) && (SaguPos.x < 865) && (SaguPos.y > 120) && (SaguPos.y < 140))
		{
			aukera = 11;
		}
		pantailaBerriztu();
		tekla = ebentuaJasoGertatuBada();
	} while (tekla != SAGU_BOTOIA_EZKERRA);
	
	if (aukera != 11)
	{
		strcpy(fitxIz, fitx[aukera].izena);
	}
	else if (aukera == 11)
	{
		fitxIzena(fitxIz);
		strcat(fitxIz, ".txt");
	}
}

FITXATEGIAK* sartuFitxBat(char *c)
{
	FITXATEGIAK *ptrAux = NULL;

	ptrAux = (FITXATEGIAK*)malloc(sizeof(FITXATEGIAK));

	strcpy(ptrAux->izena, c);
	ptrAux->pHurrengoa = NULL;

	return ptrAux;
}

void sartuFitxZerrendan(FITXATEGIAK **burua, char *c)
{
	FITXATEGIAK *ptrAux = NULL, *berria = NULL;

	if (*burua == NULL)
	{
		*burua = sartuFitxBat(c);
	}
	else
	{
		ptrAux = sartuFitxBat(c);
		berria = *burua;
		while (berria->pHurrengoa != NULL)
		{
			berria = berria->pHurrengoa;
		}
		berria->pHurrengoa = ptrAux;
	}
}

void kenduGuztia(FITXATEGIAK **burua)
{
	FITXATEGIAK *ptraux = NULL;

	while (*burua != NULL)
	{
		ptraux = *burua;
		*burua = ptraux->pHurrengoa;
		free(ptraux);
		ptraux = NULL;
	}
}

static size_t my_fwrite(void *buffer, size_t size, size_t nmemb, void *stream)
{
	struct FtpFile *out = (struct FtpFile *)stream;
	if(!out->stream)
	{
	  	/* open file for writing */ 
	  	out->stream = fopen(out->filename, "wb");
	  	if(!out->stream)
	  	{
	    	return -1; /* failure, can't open file to write */ 
	  	}
	}
	return fwrite(buffer, size, nmemb, out->stream);
}

void deskargatu(char *fitxIz)
{
	CURL *curl;
	CURLcode res;
	JOKO_ELEMENTUA karga;
	char path[MAX], zerbitzaria[MAX];
	
	strcpy(path, "./media/partiturak/");
	strcpy(zerbitzaria, "ftp://piano:proiektua@35.181.144.107/");
	strcat(zerbitzaria, fitxIz);
	strcat(path, fitxIz);
	struct FtpFile ftpfile = {path, /* name to store the file as if successful */ NULL};

	curl_global_init(CURL_GLOBAL_DEFAULT);
 
	curl = curl_easy_init();
	if(curl)
	{
	  	curl_easy_setopt(curl, CURLOPT_URL, zerbitzaria);
	 	/* Define our callback to get called when there's data to be written */ 
	  	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_fwrite);
	  	/* Set a pointer to our struct to pass to the callback */ 
	  	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &ftpfile);
	  	/* Switch on full protocol/debug output */ 
	  	curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
	 
	  	res = curl_easy_perform(curl);
	  	/* always cleanup */ 
	  	curl_easy_cleanup(curl);
	 
	    if(CURLE_OK != res)
	    {
	    	karga.id = irudiaKargatu("./media/img/Errorea.png");
			irudiaMugitu(karga.id, 0, 0);
			pantailaGarbitu();
			irudiakMarraztu();
			pantailaBerriztu();
			SDL_Delay(2000);
	    }
	    else
		{
		   	karga.id = irudiaKargatu("./media/img/deskargatua.png");
		   	irudiaMugitu(karga.id, 0, 0);
			pantailaGarbitu();
			irudiakMarraztu();
			pantailaBerriztu();
			SDL_Delay(2000);
		}
	}
	if(ftpfile.stream)
	{
 		fclose(ftpfile.stream); /* close the local file */ 
	}
	curl_global_cleanup();
	irudiaKendu(karga.id);
}

//IGO
static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *stream)
{
	curl_off_t nread;

	size_t retcode = fread(ptr, size, nmemb, stream);
	nread = (curl_off_t)retcode;
	fprintf(stderr, "*** We read %" CURL_FORMAT_CURL_OFF_T " bytes from file\n", nread);

	return retcode;
}
 
void igo(char *fitxIz)
{
	CURL *curl;
	CURLcode res;
	FILE *hd_src;
	JOKO_ELEMENTUA karga;
	struct stat file_info;
	curl_off_t fsize;
	char path[MAX], ftp[MAX];

	strcpy(ftp, "ftp://piano:proiektua@35.181.144.107/");
	strcpy(path, "./media/partiturak/");
	strcat(path, fitxIz);
	strcat(ftp, fitxIz);
 
	struct curl_slist *headerlist = NULL;
	//static const char buf_1 [] = "RNFR " fitxIz;
	//static const char buf_2 [] = "RNTO " fitxIz;
 
	if(stat(path, &file_info))
	{
	  	printf("Couldn't open '%s': %s\n", path, strerror(errno));
	}
	else
	{
		fsize = (curl_off_t)file_info.st_size;
 
		printf("Local file size: %" CURL_FORMAT_CURL_OFF_T " bytes.\n", fsize);
		/* get a FILE * of the same file */ 
		hd_src = fopen(path, "rb");
		/* In windows, this will init the winsock stuff */ 
		curl_global_init(CURL_GLOBAL_ALL);
		/* get a curl handle */ 
		curl = curl_easy_init();
		if(curl)
		{
		  	/* build a list of commands to pass to libcurl */ 
		  	//headerlist = curl_slist_append(headerlist, buf_1);
		  	//headerlist = curl_slist_append(headerlist, buf_2);
		  	/* we want to use our own read function */ 
		  	curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_callback); 
		  	/* enable uploading */ 
		  	curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L); 
		  	/* specify target */ 
		  	curl_easy_setopt(curl, CURLOPT_URL, ftp); 
		  	/* pass in that last of FTP commands to run after the transfer */ 
		  	//curl_easy_setopt(curl, CURLOPT_POSTQUOTE, headerlist); 
		  	/* now specify which file to upload */ 
		 	curl_easy_setopt(curl, CURLOPT_READDATA, hd_src);
		  	/* Set the size of the file to upload (optional).  If you give a *_LARGE
		       option you MUST make sure that the type of the passed-in argument is a
		       curl_off_t. If you use CURLOPT_INFILESIZE (without _LARGE) you must
		       make sure that to pass in a type 'long' argument. */ 
		    curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)fsize);
		    /* Now run off and do what you've been told! */ 
		    res = curl_easy_perform(curl);
		    /* Check for errors */ 
		    if(res != CURLE_OK)
		    {
		    	karga.id = irudiaKargatu("./media/img/Errorea.png");
				irudiaMugitu(karga.id, 0, 0);
				pantailaGarbitu();
				irudiakMarraztu();
				pantailaBerriztu();
				SDL_Delay(2000);
		    }
		    else
		    {
		    	karga.id = irudiaKargatu("./media/img/igo.png");
		    	irudiaMugitu(karga.id, 0, 0);
				pantailaGarbitu();
				irudiakMarraztu();
				pantailaBerriztu();
				SDL_Delay(2000);
		    }
		  	/* clean up the FTP commands list */ 
		  	curl_slist_free_all(headerlist);
		  	/* always cleanup */ 
		  	curl_easy_cleanup(curl);
		}
		fclose(hd_src); /* close the local file */ 
		curl_global_cleanup();
		irudiaKendu(karga.id);
	}
}
