#include <stdlib.h>
#include <stdio.h>
#include "gioielli.h"

Gioiello *Gioielli(const char * filename, float b, int * ret_size)
{
	char *buf = calloc(200, sizeof(char));
	FILE *f = fopen("gioielli.txt", "r");
	if(!f) // controllo se il file esiste e se non ci sono problemi all'apertura
		return NULL;

	fclose(f);
}
