/*

REVERSE OF AN ARRAY 

method-1:
    transversing in reverse order.

method-2
    transversing only half(n/2) iteration , swap the elements
*/

#include<stdio.h>

void main() {

    //method-1

/*
    int n;
    printf("enter n= \n");
    scanf("%d", &n);
    int arr[n];

    printf("enter values: \n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    printf("printing values.. \n");

    for(int i = n-1; i>=0;i--) {
        printf("%d ", arr[i]);
    }
*/

    //method2
    int arr[] = {10,20,30,40};
    int length = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = length-1;
    int temp = 0;
    for (int i=0;i*i<=length;i++) {
        temp = arr[start];
        arr[start] = arr[end];  //swapping
        arr[end] = temp;

        start++;
        end--;

    }

    //printing
    for(int i =0; i<length;i++) {
        printf("%d ", arr[i]);
    }
}