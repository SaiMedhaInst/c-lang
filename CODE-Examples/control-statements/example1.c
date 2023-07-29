# include<stdio.h>

void main() {
/*
    int a, b;
    printf("enter values for a & b : ");
    scanf("%d %d",&a, &b);

    if (a>b) {
        printf("if block\n");
        printf("condition is true so am executing...\n");
        printf("%d greater than %d\n",a,b);
    } else {
        printf("else block..\n");
        printf("condition is false so am executing...\n");
        printf("%d is lesser than %d\n" , a, b);
        
    }

    printf("next statements after if block...");

    */


// if else if example

/*
   int marks;
   printf("enter the marks : \n");
   scanf("%d" , &marks);

   if (marks>95) {
    printf("grade A+");
   } else if(marks > 90) {
    printf("grade A");
   } else if(marks > 80) {
    printf("grade B");
   }
   else if(marks > 70) {
    printf("grade C");
   }
   else if(marks > 60) {
    printf("grade D");
   } else if(marks > 50) {
    printf("grade E");
   } else{
    printf("Fail ... :( ");
   }

   */


// example for multiple if's

/*
    int num;
    printf("enter num value: ");
    scanf("%d" , &num);

    if(num > 0) {
        printf("+ve numbers...\n");
    }
    if(num%2 ==0) {
        printf("even number..\n");
    }
    if(num%3 == 0) {
        printf("multiple of 3\n");
    }
    if(num%2 == 1){
        printf("odd number \n");
    }
    else{
        printf("not odd number ..\n");
    }


    */


// example for greatest of 3 memebers.

   int a,b,c;
   printf("enter values for a , b , c \n");
   scanf("%d %d %d", &a, &b, &c);

// approach-1

/*
   if(a>b){
    if(a>c){
        printf("%d is greater", a);
    } else{
        printf("%d is greater",c);
    } 
   }
    else{
    if(b>c){
        printf("%d is greater",b);
    } else{
        printf("%d is greater",c);
    }
   }
   */

  if(a>b && a>c) {printf("a = %d is greater",a);}
  else if(b>c && b>a) {printf("b=%d is greater",b);}
  else{printf("c=%d is greater..",c);}
}