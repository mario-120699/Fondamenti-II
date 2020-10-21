#include "list_int.h"

Item* loadList(const char *filename)
{
	FILE * file = fopen(filename, "r");

	Item *i = CreateEmptyList();
	if (!file)
		return i; // return NULL

	while (true)
	{
		ElemType tmp;
		if (1 != fscanf(file, "%i", &tmp))
			break;
		i = InsertHeadList(&tmp, i);
	}
	fclose(file);
	return i;
}

