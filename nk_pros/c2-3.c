#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    double x, fx, fx_sum, dfx, fac;
    x = 1.0;
    fx = exp(x);
    dfx = exp(x);
    fx_sum = 1.0;
    fac = 1.0;
    
    printf("実数　近似値　exp(%0.3f) error\n", x);
    
    for (i=0; i < 21; i++){
        printf("%3d %22.15e %22.15e, %12.4e\n", i, fx_sum, fx, fabs((fx - fx_sum)/fx));
        fac /= ((double)i+1.0);
        fx_sum += fac*pow(x, i+1);
    }
    
    return(0);
    
}
