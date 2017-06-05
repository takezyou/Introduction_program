#include <stdio.h>
#include <math.h>
#define N 10

int main(void)
{
    double n, sum, sum2, rem, rem2;
    int i;
    sum = 0.0;
    rem = 1.0; //repeated multiplication
    rem2 = 1.0;
    
    for (n=0.0; n <= N; n++){
        for (i = 2*n; i > 0; i-=2){
            rem *= (double)i;
        }
        for (i = (2*n)+1; i > 0; i-=2){
            rem2 *= (double)i;
        }

        
        sum += (rem / rem2) * pow((0.1), n);
        rem = 1.0;
        rem2 = 1.0;
    }
    

    for (n=0.0; n <= N; n++){
        for (i = 2*n; i > 0; i-=2){
            rem *= (double)i;
        }
        for (i = (2*n)+1; i > 0; i-=2){
            rem2 *= (double)i;
        }
        
        sum2 += (rem / rem2) * pow((0.2), n);
        rem = 1.0;
        rem2 = 1.0;
    }
    
    printf("pi/4 = %lf\n", (sum*3.0/10.0)+(sum2*4.0/10.0));
    
    return(0);
    
}
