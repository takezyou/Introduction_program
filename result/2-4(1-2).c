#include<stdio.h>
#include<math.h>

#define N 1000

int main(void) { 
    int i;
    double pi1, pi2;

    printf("--------\n");
    for(i = 0; i <= N; i++) {
        pi1 += pow(-1, i) / (2 * i + 1);
    }
    printf("π / 4 = %lf\n", pi1);

    printf("--------\n");
    for(i = 1; i <= N; i++) {
        pi2 += 1 / pow(i, 2);
    }
    printf("π^2 / 6 = %lf\n", pi2);
    
}
