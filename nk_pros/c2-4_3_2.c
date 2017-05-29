#include <stdio.h>
#include <math.h>
#define N 10

int main(void)
{
    double n, sum, sum2, rem, rem2;
    sum = 0.0;
    rem = 1.0; //repeated multiplication
    rem2 = 1.0;
    
    for (n=0.0; n <= N; n++){

        sum += (rem / rem2) * pow((0.1), n);
        sum2 += (rem / rem2) * pow((0.2), n);
        
        printf("pi/4 = %lf\n", (sum*3.0/10.0)+(sum2*4.0/10.0));
        
        rem *= (2.0 * n) + 2;
        rem2 *= (2.0 * n) + 3;
    }
    return(0);
    
}
