#ifndef GIOIELLI_
#define GIOIELLI_

typedef struct
{
	int codice;
	float peso;
	float prezzo;
} Gioiello;

Gioiello *Gioielli(const char* filename, float b, int *ret_size);

#endif // !GIOIELLI_
