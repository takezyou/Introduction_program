#include <stdio.h>
#include <math.h>

int main (void) { 
    double x, a, b, c;
    printf("Input x = ");
    scanf("%lf", &x);
    printf("Input a = ");
    scanf("%lf", &a);
    printf("Input b = ");
    scanf("%lf", &b);
    printf("Input c = ");
    scanf("%lf", &c);

    if (x <= sqrt(2) && x > pow(-3,2.2)){
        printf("sqrt2以下かつ-3^2.2より大きい実数\n");
    }

    else if (a < 1 && b < 1 && c < 1){
        printf("全て1未満\n");
    }

    if (a <= 3 || a != 0) {
        printf("実数 a は3以下だが0ではない\n");
    }
}