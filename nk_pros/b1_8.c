#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, dx, dfdx_num;
    x = 1.0;
    
    printf("Input delta x =");
    scanf("%lf", &dx);
    
    dfdx_num = (( pow((x+dx), 3.0) - pow((x-dx), 3.0) ) / (2*dx));
    
    printf("df/dx = %lf\n", dfdx_num);
    
    return (0);
    
}