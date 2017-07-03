#include <stdio.h>
#include <math.h>

int main (void) { 
    double a, b, c, x1, x2, det;
    printf("Solve a quadratic equation ax^2 + bx + c = 0\n");
    printf("Input a = ");
    scanf("%lf", &a);
    printf("Input b = ");
    scanf("%lf", &b);
    printf("Input c = ");
    scanf("%lf", &c);
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("Identity.\n");
            }
            else {
                printf("Undetermined.\n");
            }
        }
        else {
            printf("Soution x = %e\n", -c/b);
        }
    }
    else {
        det = b*b - 4.0*a*c;
        if(det >= 0.0){
            x1 = (-b + sqrt(det) / (2.0*a));
            x2 = (-b - sqrt(det) / (2.0*a));
            printf("Solution x = %e and %e\n", x1, x2);
        }
        else {
            det = -(b*b - 4.0*a*c);
            if(det >= 0.0){
                x1 = (-b / (2.0*a));
                x2 = (-b / (2.0*a));
                x3 =
                printf("%lf + %lfi and %lf + %lfi\n", x1, det, x2, );
            }
        }
    }
}