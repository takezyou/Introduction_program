#include<stdio.h>
#include<math.h>
#define max 1000

int main(void){
    int i, n;
    double x[max], x1_sum = 0.0, x2_sum = 0.0, average, sigma;

    printf("How many data ? = ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("Input Data x[%d] = ", i);
        scanf("%lf", &x[i]);
    }

    for(i = 0; i<n; i++){
        x1_sum += x[i];
    }

    average = x1_sum/(double)n;
    printf("average = %e\n", average);
    
    for(i = 0; i<n; i++){
        x2_sum += pow((x[i] - average),2);
    }

    sigma = sqrt(x2_sum/(double)n);
    printf("sigma = %e\n", sigma);
}