/*
Write a Program to find second largest element in a array

method1: 
    - Sort the array and print last second index element.

method2:
 transverse the loop all index location finding first and second largest.
*/

#include<stdio.h>
#include<limits.h>
void main() {

    int arr[] ={10, 10, 10};
    int len = sizeof(arr)/sizeof(arr[0]);

    int first,second;
    first=second=INT_MIN; //-2147483647 // assign with lowest minimum number of int

    if(len >= 2) {
        for(int i=0;i<len;i++) {
            if(arr[i] > first) {
                second = first;
                first = arr[i];
            }
            else if(arr[i]>second && arr[i] != first) {
                second = arr[i];
            } 
        }

        if(second != INT_MIN) {
            printf("second largest elemet is %d", second);
        }
        else{
            printf("The second largest does not exist\n");
        }
    } 
    else
    {
        printf("aray size should be >2\n");
    }

}