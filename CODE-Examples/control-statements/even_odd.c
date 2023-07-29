# include<stdio.h>

void main() {
    int num;
    printf("enter num : ");
    scanf("%d", &num);

/*
    if(num%2 == 0) {
        printf("%d is even number.", num);
    } 
    else{
        printf("%d is odd number..", num);
    }
*/
    (num%2 == 0) ? printf("even") : printf("odd");


}