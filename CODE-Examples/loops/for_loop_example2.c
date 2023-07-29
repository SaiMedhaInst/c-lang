#include<stdio.h>

void main() {


/*
    for(int i=10; i>=0;--i) {
        printf("hello %d\n" , i);
    }

    for(int i = 0; i<=10; i++) {
        printf("saimedha\n");
        i = i+2;
    }

    for(int j = 0 ; j<=5;j++){
        printf("monday \n");
        j--;
    }

*/

// complexity : n iteration..

/*
    long num;
    printf("enter num: "); scanf("%ld", &num);
    int div_count = 0;
    for(int i=1 ; i<=num ; i++){
        if(num%i == 0) {
           ++div_count; 
        }
    }
    if(div_count == 2){
        printf("%ld is prime number.", num);
    } else{
        printf("%ld not a prime number.",num);
    }

*/
    // squareRoot(n) iteration



//reverse of array..
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



}