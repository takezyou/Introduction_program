#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, sum;
    sum = 0;
    
    for(i = 1; i < 11; i++){
        sum = sum + i;
        printf("i = %3d, sum = %3d\n", i, sum);
    }
    
    return(0);
    
}
