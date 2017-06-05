#include <stdio.h>

int main(void)
{
	int a;
	int b[3];
	int ax, ay, az;
	int bx, by, bz;

	printf("Input: ax ay az:");
	scanf("%d %d %d", &ax, &ay, &az);

	printf("Input: bx by bz \n");
	scanf("%d %d %d", &bx, &by, &bz);
	
	//内積
	a = (ax*bx) + (ay*by) + (az*bz);

	//外積
	b[0] = (ay*bz)-(az*by);
	b[1] = (az*bx)-(ax*bz);
	b[2] = (ax*by)-(ay*bx);

	printf("内積:%d\n", a);
	printf("外積:(%d, %d, %d)", b[0], b[1], b[2]);
	return(0);
}
