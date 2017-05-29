#include <stdio.h>

int main(void)
{
	double a;
	double b[3];
	double ax, ay, az;
	double bx, by, bz;

	printf("Input: ax ay az:");
	scanf("%lf %lf %lf", &ax, &ay, &az);

	printf("Input: bx by bz \n");
	scanf("%lf %lf %lf", &bx, &by, &bz);
	
	//内積
	a = (ax*bx) + (ay*by) + (az*bz);

	//外積
	b[0] = (ay*bz)-(az*by);
	b[1] = (az*bx)-(ax*bz);
	b[2] = (ax*by)-(ay*bx);

	printf("内積:%.3lf\n", a);
	printf("外積:(%.3lf, %.3lf, %.3lf)", b[0], b[1], b[2]);
	return(0);
}
