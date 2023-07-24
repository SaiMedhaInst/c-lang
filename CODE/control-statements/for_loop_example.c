#include<stdio.h>

void main() {

    int n;
    printf("enter n value: ");
    scanf("%d" , &n);


/*
    // sum of n natural numbers..
    int sum = 0;
    for(int i=1; i<=n ;i++) {
        sum = sum + i;
    }

    printf(" sum is = %d", sum);

*/
    int fact = 1;
    for(int i=1 ; i<=n; i++) {
        fact = fact * i;
    }

    printf("factorial of %d is %d", n, fact);


}