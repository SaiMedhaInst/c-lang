#include<stdio.h>


void printName(char* name) {
    
    for(int i=1 ;i<=10;i++) {
        printf("%s\n", name);
    }

    printf("\n");
}

int modulus(int n1 , int n2) {
    return n1 % n2;
}

int printInfo() {
    printf("hello world... am printInfo...");
}

int main()
{
    // printName();

    // int result = modulus(5,2);
    // printf("modulus : %d\n", result);

    // char name[10];
    // printf("enter name: \n");
    // scanf("%[^\n]s", name);

    // printName("K Pavan");
    // printName("B Kathik");
    // printName("Sai Medha Koti");


    return 0;
}



