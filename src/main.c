#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bonjour !\n");
    int* tab = malloc(sizeof(int)*10);
    tab[0] = 1;
    tab[1] = 4;
	return 0;
}
