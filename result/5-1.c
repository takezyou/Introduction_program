#include <stdio.h>
#include <math.h>
#define nmax 100

double fnc (double x); //関数プロトタイプ宣言

int main () {
  int i; //変数宣言
  double xa, xb, dx, x, f; //変数宣言
  xa = 0.0; //xaに0.0を代入
  xb = M_PI; //xbに3.14...を代入
  dx = (xb - xa) / (double)nmax; //変位を求めるために(b-a)/nをしている
  for (i=0; i<=nmax; i++) {
    x = xa + dx * (double)i; //格子点の座標を求める計算
    f = fnc(x); //関数fnc()に先程計算したxをいれｆに代入
    printf("%e  %e \n", x, f); //格子点の座標の計算と関数fncの計算結果を出力
  }
}

double fnc(double x) {
  double f; //変数宣言
  if (x < M_PI/2.0){
    f = sin(x); //xがpi/2.0より小さければsin(x)を代入
  }
  else {
    f = 1.0+cos(x); //xがpi/2.0より大きければ1.0+cos(x)を代入
  }
  return f;
}
