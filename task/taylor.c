#include<stdio.h>
#include<math.h>

#define  N 6

int main(void){

    double x, z, fx, f[N];
    int i, j;
    x = 1.0;
    z = 1.0;
    fx = exp(x);
    f[0] = 1.0;

    for(i = 1; i < 6; i++ ){
        z *= i;

        f[i] = f[i-1] + pow(x, i) / z;
    }

    for(j = 0; j < 6; j++){
        printf("exp(%lf) = %lf, %d order = %lf, error = %lf \n", x, fx, j, f[j], fabs((fx - f[j])/fx));
    }

}
