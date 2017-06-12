#include<stdio.h>

int main(void){
    int a,b;
    printf("Compare integers a and b\n");
    printf("input a = ");
    scanf("%d", &a);
    printf("input b = ");
    scanf("%d", &b);
    if(a < b){
        printf("a is smaller than b.\n");
    }
    else if(a > b){
        printf("a is larger than b.\n");
    }
    else {
        printf("a is equal than b.\n");
    }
    
}