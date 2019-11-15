#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRINT printf(" ")

int function(int key) {
	int i, b = rand();
	srand(time(NULL));
	i = key;
	
	i = b + rand();
	
	return i;
}
