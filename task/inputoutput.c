#include <stdio.h>

int main(void) {
	double ax, ay, az;
	double bx, by, bz;
	double n, g_1, g_2, g_3;
  printf("Input ax, ay, az \n");
	scanf("%lf %lf %lf", &ax ,&ay, &az);
  printf("Input bx, by, bz \n");
	scanf("%lf %lf %lf", &bx ,&by, &bz);
  
	n = (ax * bx) + (ay * by) + (az * bz); 
	g_1 = (ay * bz) - (az * by); 
	g_2 = (az * bx) - (ax * bz); 
	g_3 = (ax * by) - (ay * bx);

	printf("内積: %lf \n", n);
	printf("外積: (%lf, %lf, %lf)\n", g_1, g_2, g_3); 
}
