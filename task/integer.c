#include <stdio.h>

int main(void) {
	int x, y, z;
	x = 100000000000000000;
	y = 10000000000000000;
	z = x - y;
	
	printf("Answer %d\n", z);
	printf("%d - %d = %d\n", x, y ,z);
}
