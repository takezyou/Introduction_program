#include <stdio.h>

void hanoi(int, char, char, char);

int main (void){
    int n;
    char a, b, c;
    a = 'A'; b = 'B'; c = 'C';
    printf("hanoi's tower levels  n=");
    scanf("%d", &n);
    hanoi(n,a,b,c);
}

void hanoi(int n, char a, char b, char c){
    char x, y, z;
    if (n == 0){
        return;
    } else {
        x = a; y = b; z = c;
        hanoi(n-1,x,z,y);
        printf("A ring at level %d is moved from %c to %c\n", n,x,y);
        hanoi(n-1,z,y,x);
        return;
    }
}