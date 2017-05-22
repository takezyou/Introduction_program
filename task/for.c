#include <stdio.h>

int main(void){
	int i, sum;
	sum = 0;
	for(i=0; i<11; i=i+1){
		sum = sum + 1;
		printf("i = %3d, sum = %3d\n", i, sum);
	}
}
