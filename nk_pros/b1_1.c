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
    
    return (0);
    
}