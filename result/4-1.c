#include<stdio.h>
#include<math.h>

int main(void){
    double x,a;
    a = 0;
    printf("input x = ");
    scanf("%lf", &x);
    if(sin(x) > a){
        printf("実数である\n");
    }
    else {
        printf("実数でない\n");
    }
}