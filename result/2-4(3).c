#include<stdio.h>
#include<math.h>

int main(void){
    int i, n;
    double pi, a, b, c, d, fact1, fact2;
    pi = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 1;
    fact1 = 1.0;
    fact2 = 1.0;

    printf("n:");
	scanf("%d",&n);

    for(i = 0; i < n; i++){
        a += (fact1 / fact2) * pow((1.0 / 10.0), i);
        b += (fact1 / fact2) * pow((2.0 / 10.0), i);
        pi =  ((3.0 / 10.0) * a) + ((4.0 / 10.0) * b);

        printf("i = %d, π / 4 = %lf\n", i, pi);

        fact1 = fact1 * (2.0 * n + c);
        c = c - 2;

        fact2 = fact2 * (2.0 * n  + d);
        d = d - 2;
    }
}