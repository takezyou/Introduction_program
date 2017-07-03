#include <stdio.h>
#include <math.h>

int main (void) { 
    double a, b, c;
    printf("Input a = ");
    scanf("%lf", &a);
    printf("Input b = ");
    scanf("%lf", &b);
    printf("Input c = ");
    scanf("%lf", &c);

    if ((a+b) > c && (b+c) > a && (c+a) > b) {
        printf("三角形を作ることができる\n");
    }
}