#include <stdio.h>

int fnc(int, int);

int main (void){
    int n;
    printf("Factorial of n=");
    scanf("%d", &n);
    printf("n != %d\n", fnc(n));
}

int fnc(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n*fnc(n-2);
    }
}
