#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    float t, x;
    double tt, xx;

    t = 1.0;
    x = 1.0;

    tt = 1.0;
    xx = 1.0;
    
    printf("float\n");
    for (i = 1; i <= 20; i++){
        printf("keta = %2d, x = %27.20e, t = %10.3e\n", i, x, t);
        t /= 10.0;
        x += t;
    }
    
    printf("\ndouble\n");
    for (i = 1; i <= 20; i++){
        printf("keta = %2d, x = %27.20e, t = %10.3e\n", i, xx, tt);
        tt /= 10.0;
        xx += tt;
    }
         
    return(0);
    
}
