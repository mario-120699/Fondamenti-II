#include <stdlib.h>

int * Monete(int *t, int size, int b)
{
	if (b <= 0)
		return NULL;
	int *ret = calloc(size, sizeof(int));

	for (int i = 0; i < size; i++)
	{
		ret[i] = b / t[i];
		b = b % t[i];
	}
	return ret;
}


int main(void)
{
	int b = 126;
	int t[] = { 50, 20, 10, 5, 2, 1 };
	int size = sizeof(t) / sizeof(unsigned);

	int *risultato = Monete(t, size, b);

	int b2 = 10;
	int t2[] = { 50, 20, 6, 5, 1 };
	size = sizeof(t) / sizeof(unsigned);

	risultato = Monete(t2, size, b2);

	return EXIT_SUCCESS;

}