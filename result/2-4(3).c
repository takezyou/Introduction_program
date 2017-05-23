#include<stdio.h>
#include<math.h>

int main(void){
    int i, n;
    double pi, a, b, fact1, fact2;
    pi = 0;
    a = 0;
    b = 0;
    fact1 = 1.0;
    fact2 = 1.0;

    printf("n:");
	scanf("%d",&n);

    for(i = 0; i < n; i++){
        a += (fact1 / fact2) * pow(0.1, i);
        b += (fact1 / fact2) * pow(0.2, i);
        pi =  (0.3 * a) + (0.4 * b);

        printf("i = %d, π / 4 = %lf\n", i, pi);

        fact1 *= (2.0 * (double)i + 2); 

        fact2 *= (2.0 * (double)i  + 3);

    }
}
