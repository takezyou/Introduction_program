#include <stdio.h>
#include <math.h>
#define nmax 1000

int main(void)
{
    
	
    int i, n;
    double x[nmax], x_sum, average, sigma;
    x_sum = 0.0;
    sigma = 0.0;

    printf("How many data? :");
    scanf("%d", &n);
    
    for (i=0; i < n; i++){
        printf("Input data x[%d] :", i);
        scanf("%lf", &x[i]);
        x_sum += x[i];
    }
    for (i=0; i<n; i++){
        average = x_sum/(double)n;
        sigma += pow((x[i] - average),2);
    }

    printf("average = %e\n", average);
    printf("sigma   = %e\n", sqrt((sigma/(double)n)));
    
    return(0);
}
