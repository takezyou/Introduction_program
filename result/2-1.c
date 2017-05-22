#include <stdio.h>

int main(void){
	int i, n, sum1, sum2;

	printf("n:");
	scanf("%d",&n);

	sum1 = 1;
	sum2 = 1;

	for(i=0; i<n; i++){
		printf("i = %3d, sum1 = %3d\n", i, sum1);
		sum1 = sum1 + 1;
	}

	printf("nizyou\n");
	for(i=0; i<n; i++){
		sum2 += i * i;
		printf("i = %3d, sum2 = %3d\n", i, sum2);
	}

}
