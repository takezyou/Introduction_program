#include <stdio.h>
int main(void)
{
    double x, dx, dfdx_num;
    x = 1.0;
    
    printf("Input delta x =");
    scanf("%lf", &dx);
    
    dfdx_num = ((x+dx) * (x+dx) * (x+dx) - (x*x*x)) / dx;
    
    printf("df/dx(x=1) = 3. delta x = %lf\n", dx);
    printf("Numerical value of df/dx = %lf\n", dfdx_num);
    printf("Relative error of df/dx = %lf\n", ((3.0-dfdx_num)/3.0));
    
    return (0);
    
}