#include <stdlib.h>
#include "gioielli.h"

int main(void)
{
	char file[] = "gioielli.txt";
	float b = 121;
	int ret_size;
	Gioiello * ret = Gioielli(file, b, &ret_size);
}
