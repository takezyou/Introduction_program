#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, sum, n, sum2;
    sum = 0;
    sum2 = 0;
    
    printf("input; n = ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        sum += i;
        sum2 += i * i;
        printf("i = %3d, sum = %5d, sum2 = %5d \n", i, sum, sum2);
    }
    
    return(0);
    
}
