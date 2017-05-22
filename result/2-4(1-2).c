#include<stdio.h>
#include<math.h>

#define N 10 

int main(void) { 
    int i;
    double pi1, pi2, pi3, a, b, c, fact1, fact2;
    pi3 = 1.0;
    a = 1.0;
    b = 1.0;
    c = 1.0;
    fact1 = 1.0;
    fact2 = 1.0;

    printf("--------\n");
    for(i = 0; i <= N; i++) {
        pi1 += pow(-1, i) / (2 * i + 1);
        printf("i = %d, π / 4 = %lf\n", i, pi1);
    }

    printf("--------\n");
    for(i = 1; i <= N; i++) {
        pi2 += 1 / pow(i, 2);
        printf("i = %d, π^2 / 6 = %lf\n", i, pi2);
    }
    
}