#include<stdio.h>

void main() {

    //Linear Search - Algorithm

    /*
    int nums[] = {10,3,2,7,99,22,6};
    int key = 10;

    int n = sizeof(nums) / sizeof(nums[0]);
    int iterationCount = 0;
    for(int i=0;i<n;i++) {
        iterationCount++;
        if(nums[i] == key) {
            printf("elemet %d found at index %d", nums[i], i);
            break;
        }
    }

    printf("\n");
    printf("total iteration took %d" , iterationCount);

    */



//example-1
/*
    for(int i=0;i<=100;i+=2) {
        
        if(i==0 || i ==10 ) {
            continue;
        }
        if(i%5 == 0){
            break;
        }
        printf("%d " , i);
    }

    */

   for(int i=0;i<10000;i++) {
        printf("hello am for loop.. uisng break..\n");
        break;
       
   }

    int count = 0;
    for(int i=0;i<10000;i++) {
        count++;
        continue;;
        printf("hello am for loop..\n");
   }

   printf("count value after loop %d\n" , count);
            

}