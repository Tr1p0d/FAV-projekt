#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* mem = malloc(123);

	for (int i = 0; i <= 100; i++)
	{
		if (i == 100) { return 1; }
	}

	free(mem);
	return 0;
}
