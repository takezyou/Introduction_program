#include <stdio.h>

int main(void){
	int i, n, sum1, sum2;

	printf("n:");
	scanf("%d",&n);

	sum1 = 0;
	sum2 = 0;

	for(i=1; i<n+1; i++){
		sum1 =  sum1 + i;
		printf("i = %3d, sum1 = %3d\n", i, sum1);
	}

	printf("nizyou\n");
	for(i=1; i<n+1; i++){
		sum2 += i * i;
		printf("i = %3d, sum2 = %3d\n", i, sum2);
	}

}
