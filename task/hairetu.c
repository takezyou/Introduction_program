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
        x2_sum += pow(x[i],2);
    }

    average = x1_sum/(double)n;
    sigma = sqrt(x2_sum/(double)n - pow(average,2));
    printf("average = %e\n", average);
    printf("sigma = %e\n", sigma);
}