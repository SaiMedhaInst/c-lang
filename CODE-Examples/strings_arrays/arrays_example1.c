#include<stdio.h>

void main(){


/*
    int marks[5]; //declare

    //initialisation..
    marks[0] = 78;
    marks[1] = 89;
    marks[2] = 98;
    marks[3] = 67;
    marks[4] = 92;

    int arrLen = sizeof(marks) / sizeof(marks[0]);
    printf("array length is %d\n", arrLen);

    printf("0th index element is %d\n", marks[0]);
    printf("1st index element is %d\n", marks[1]);
    printf("2nd index element is %d\n", marks[2]);
    printf("3rd index element is %d\n", marks[3]);
    printf("4th index element is %d\n", marks[4]);

*/

/*
    int studentMarks[] = {90,57,85,67}; //declaration & initialisation 
    int n = sizeof(studentMarks) / sizeof(studentMarks[0]);

    for(int i=0; i<n; i++) {
        printf("element at [%d] is %d\n",i, studentMarks[i]);
    }

    printf("%d", studentMarks[10]); // garabage value 

*/

/*
    float nums[5];

    for(int i=0;i<5;i++){
        printf("%f\n",nums[i]);
    }

*/

    // read array of Integers, find the largest element
    // arr[] = {10,5,77,45,35,8}


/*
    int n;
    printf("enter array size: \n"); scanf("%d", &n);
    int num[n];

    //reading the data.
    for(int i=0;i<n;i++){
        int data;
        printf("enter data for [%d] index\n",i);
        scanf("%d",&data);
        num[i] = data;
    }

    //printing the data
    printf("printing array,,\n") ;
    for(int i = 0;i<n;i++) {
        printf("%d\n",num[i]);
    }

    //largest element.

    */
   int num[] = {55,67,1,100};
   int n = sizeof(num) / sizeof(num[0]);

    int large = num[0];

    for(int i=1;i<n;i++) {
        if(num[i] > large) {
            large = num[i];
        }
    }

    printf("largest element in an array is %d\n", large);


    // int[] myNumbers = {25, 50, 75, 100};
    // printf("%d" , myNumbers[2]);



}