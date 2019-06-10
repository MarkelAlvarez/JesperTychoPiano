#ifndef PARTEKATU_H
#define PARTEKATU_H

#include <curl/curl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#ifdef WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

struct FtpFile
{
  const char *filename;
  FILE *stream;
};

typedef struct S_FITXATEGIAK
{
	char izena[MAX];
	struct S_FITXATEGIAK *pHurrengoa;
}FITXATEGIAK;

void partekatu(JOKO_ELEMENTUA menua);
void FTPaukerak();
//DESKARGATU
static size_t my_fwrite(void *buffer, size_t size, size_t nmemb, void *stream);
void fitxAukera(char *fitxIz);
void FTPDirektorioa(FITXATEGIAK *fitx, FITXATEGIAK **burua);
void fitxKoordenatuak(char *fitxIz, FITXATEGIAK *fitx);
void deskargatu(char *fitxIz);
FITXATEGIAK* sartuFitxBat(char *c);
void sartuFitxZerrendan(FITXATEGIAK **burua, char *c);
void kenduGuztia(FITXATEGIAK **burua);
//IGO
static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *stream);
void igo(char *fitxIz);

#endif
