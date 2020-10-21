#include "gioielli.h"

int leggiDati(FILE *f, Gioiello **g)
{
	Gioiello * letti = NULL;
	Gioiello tmp;

	int i = 0;
	while (1)
	{
		if (fscanf(f, "%i %f %f", &tmp.codice, &tmp.peso, &tmp.prezzo) != 3)
			break;
		letti = realloc(letti, (++i) * sizeof(Gioiello));
		letti[i - 1] = tmp;
	}

	*g = letti;
	fclose(f);
	return i;
}

int TrovaMigliore(Gioiello * g, int n)
{

}

Gioiello *Gioielli(const char * filename, float b, int * ret_size)
{

	FILE *f = fopen("gioielli.txt", "r");
	if(!f) // controllo se il file esiste e se non ci sono problemi all'apertura
		return NULL;

	Gioiello *g; // gioelli disponibili
	int n = leggiDati(f, &g);

	Gioiello *a = malloc(n * sizeof(Gioiello));

	free(g);
	return a;

}
