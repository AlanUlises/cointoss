#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char **argv)
{
	int tosses = 0;
	int i = 0;
	int aguila = 0;
	int sello = 0;

	tosses = atoi(argv[1]);	
	srand(time(NULL));

	for (i = 0; i < tosses; i++) {
		int side = rand() % 2;

		side == 0 ? sello++ : aguila++;
	}

	printf("Aguilas: %d\nSello: %d\n", aguila, sello);

	return 0;
}
