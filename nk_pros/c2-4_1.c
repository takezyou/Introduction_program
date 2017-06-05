#include <stdio.h>
#include <math.h>
#define N 1000

int main(void)
{
    double n, sum;
    sum = 0.0;
    
    for (n=0.0; n <= N; n++){
        sum += (pow((-1.0), n)) / ((2.0*n) + 1);
        
    }
    
    printf("pi/4 = %.5lf\n", sum);
    
    return(0);
    
}
