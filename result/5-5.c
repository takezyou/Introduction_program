#include <stdio.h>

// 2 つの自然数 a, b (a ≧ b) について、a の b による剰余を r とすると、 
// a と b との最大公約数は b と r との最大公約数に等しいという性質が成り立つ。
// この性質を利用して、 b を r で割った剰余、 除数 r をその剰余で割った剰余、
// と剰余を求める計算を逐次繰り返すと、剰余が 0 になった時の除数が a と b との最大公約数となる。

int gcd(int, int);

int main (void){
    int a, b;
    printf("G.C.D. of integers a and b\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("G.C.D. = %d\n", gcd(a,b));
}

int gcd(int a, int b){
    if(b == 0){
        return a;
    } else {
        printf("%dを%dで割った余りは%d\n",a, b , a%b);
        return gcd(b, a%b);
    }
}