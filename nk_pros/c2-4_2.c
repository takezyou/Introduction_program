#include <stdio.h>
#include <math.h>
#define N 1000

int main(void)
{
    double n, sum;
    sum = 0.0;
    
    for (n=1.0; n <= N; n++){
        sum += 1 / (pow(n, 2));
        
    }
    
    printf("pi^2/6 = %.5lf\n", sum);
    
    return(0);
    
}
