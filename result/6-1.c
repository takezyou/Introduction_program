#include <stdio.h>
#include <math.h>
#define NMAX_NAME 100

int main(void) {
    FILE *in_file, *out_file; // ファイル型変数を定義
    int i, k, nmax, nout, namax; // int型の変数を定義
    double a, amin, amax; // double型の変数を定義
    double xn, xnml; // double型の変数を定義
    char output_filename[NMAX_NAME]; // ファイル名の名前を100文字としchar型の変数を定義している

    in_file = fopen("input_data.dat", "r"); // input_data.datを読み込む
    fscanf(in_file, "%d", &nmax); // 1100を読み込む
    fscanf(in_file, "%d", &nout); // 1000を読み込む
    fscanf(in_file, "%d", &namax); // 1000を読み込む
    fscanf(in_file, "%lf", &amin); // 1.0を読み込む
    fscanf(in_file, "%lf", &amax); // 4.0を読み込む
    fclose(in_file); // 開いたin_fileを閉じる

    printf("Output file name = ");
    scanf("%s",output_filename);
    out_file = fopen(output_filename,"w");

    for(k=0; k < namax+1; k++){
        a = amin + (amax - amin)*(double)k/(double)namax;
        xnml = 0.25;
        for(i=1; i < nmax+1; i++){
            xn = a * xnml * (1.0 - xnml);
            if(i >= nout){
                fprintf(out_file, "%e %22.15e \n", a, xn);
            }
            xnml = xn;
        }
    }
    fclose(out_file);
}