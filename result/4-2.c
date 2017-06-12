#include<stdio.h>
#include<math.h>

int main(void){
    int n, a, b, c;

    printf("input n = ");
    scanf("%d", &n);

    for (a = 1; a < n+1; a++) {
        for (b = a; b < n+1; b++) {
            for (c = b; c < n+1; c++){
                if ((pow(a,2) + pow(b,2)) == pow(c,2)){
                    printf("a:%d\tb:%d\tc:%d\n", a, b, c);
                }
            }
        }
    }   
}