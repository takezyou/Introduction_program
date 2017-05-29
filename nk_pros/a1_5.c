#include <stdio.h>

int main(void)
{
	double x, y, z;
	x = 4.2;
	y = 7.5;
	z = x - y;
	
	printf("Answer : %lf\n",z);
	printf("%lf - %lf = %lf\n", x, y, z);

	return(0);
}
