#include<stdio.h>
#include<math.h>

void main() {

    int num;
    printf("enter number: ");
    scanf("%d", &num);

    //native 
    int factorCount = 0;
    for(int i=1; i<=num;i++) {
        if(num%i == 0) {
            factorCount++;
        }
    }

    if(factorCount == 2) {
        printf("%d is a prime\n", num);
    } else{
        printf("%d is not a prime\n", num);
    }

    //efficient approach  : O(sqrt(n))
    int isPrime = 1;
    if(num>=2) {
       for(int i=2; i*i<=num;i++){
            if(num % i ==0){
                isPrime = 0;
                break;
            }
       }
       if(isPrime) {
        printf("%d is a prime no", num);
       } else{
        printf("%d is not a prime no", num);
       }
       
    }else{
        printf("%d is not prime no.")
    }

}