#include<stdio.h>
#include <math.h>

int main(void){
	double x, dx, dfdx_num;
	x = 1.0;
	printf("Input delta x. \n delta x = ");
	scanf( "%lf", &dx);
  dfdx_num = (pow((x+dx),3.0) - pow((x-dx), 3.0)) / (2*dx);	
	printf("df/dx(x=1) = 3. delta x = %lf \n", dx);
	printf("Numerical value of df/dx = % lf \n", dfdx_num);
  printf("Relative error |3.0 - df/dx| / 3.0 = %lf \n", fabs(3.0 - dfdx_num) / 3.0);
}
