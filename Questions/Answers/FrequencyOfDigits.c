/*

Write a C program to count frequency of digits in a given number.

Input

number: 116540

Output

Frequency of 0 = 1 
Frequency of 1 = 2 
Frequency of 2 = 0 
Frequency of 3 = 0 
Frequency of 4 = 1 
Frequency of 5 = 1 
Frequency of 6 = 1 
Frequency of 7 = 0 
Frequency of 8 = 0 
Frequency of 9 = 0

*/

#include<stdio.h>

void main() {

    int num;
    printf("enter number: "); scanf("%d", &num);
    int freq[10] = {0,0,0,0,0,0,0,0,0,0};

    while(num != 0) {
        freq[num%10]++;
        num = num/10;
    }
    printf("frequency of each digit: \n");
    for(int i=0;i<10;i++) {printf("frequency of %d is %d\n", i, freq[i]);}

}