#include<stdio.h>

int main(void){
    int i;
    float t, x;
    double td, xd;
    t = 1.0;
    x = 1.0;
    td = 1.0;
    xd = 1.0;

    printf("float\n");
    for (i = 1; i < 21; i++){
        printf("keta = %2d, x = %27.20e, t = %10.3e\n", i, x, t);
        t = t/10.0;
        x += t;
    }

    printf("double\n");
    for (i = 1; i < 21; i++){
        printf("keta = %2d, x = %27.20e, t = %10.3e\n", i, xd, td);
        td = td/10.0;
        xd += td;
    }

}