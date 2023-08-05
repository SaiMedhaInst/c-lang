#include<stdio.h>



int addition(int n1, int n2) {
    return n1+n2;
}

int subtraction(int n1, int n2) {
    return n1-n2;
}

int mult(int n1, int n2) {
    return n1*n2;
}


int division(int n1, int n2) {
    return n1/n2;
}

int modulus(int n1, int n2) {
    return n1%n2;
}

int main() {

    //declare 
    int n1, n2;


    //read
    printf("enter the values of n1 & n2 :") ;
    scanf("%d %d", &n1, &n2);


    //addition 
    printf("addition : %d\n", addition(n1,n2));

    printf("difference : %d\n", subtraction(n1,n2));

    printf("multiplication : %d\n", mult(n1,n2));

    printf("Division Quotient : %d\n", division(n1,n2));

    printf("Modulus-Remainder : %d\n", modulus(n1,n2));

    

}
