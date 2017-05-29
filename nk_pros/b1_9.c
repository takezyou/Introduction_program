#include <stdio.h>
#include <math.h>

#define N 10

int main(void)
{
    double x, fx, f[N];
    double fact = 1.0;
    int i, j;
    x = 1.0;
    fx = exp(x);
    
    f[0] = 1.0;
    for(i=1; i < N; i++){
        fact *= (double)i;
        f[i] = f[i-1] + pow(x, i) / fact;
    }
    
    for (i=0; i < N; i++){
        printf("exp(%lf) =  %lf, %d order = %lf, error = %lf\n", x, fx, i, f[i], (fabs(fx-f[i])/fx) );
    }
    
    return (0);
    
}