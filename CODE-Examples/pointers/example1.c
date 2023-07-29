#include<stdio.h>

// void myFunction(void);

void main() {

    // int *ptr;
    // printf("%p\n", ptr);

    // int num = 10;
    // ptr = &num;

    // int **ptr2 = &ptr;

    // printf("%p %p %p\n", ptr, &num,ptr2);
    // printf("%d %d %d\n", *ptr, num,**ptr2);


    // char name[] = "hello world";
    // char *ptr = name;
    // printf("%p %c\n",ptr, *ptr);
    // printf("%p %c\n",ptr+1, *ptr+1);
    // printf("%p %c\n",ptr+2, *ptr+2);
    // printf("%p %c\n",ptr+3, *ptr+3);

    // int *ptr = NULL;
    // printf("%p", ptr);

    // int level = 3;
    // float fee = 50000.252;
    // char grade = 'A';
    // int marks[] = {78,89,67,98};

    // int *ptr_int = &level;
    // float *ptr_float = &fee;
    // char *ptr_char = &grade;
    // int *ptr_arr = marks;

    // printf("Size of Integer Pointer     \t:\t%d bytes\n", sizeof(ptr_int));
    // printf("Size of Character Pointer   \t:\t%d bytes\n",sizeof(ptr_char));
    // printf("Size of Float Pointer       \t:\t%d bytes\n", sizeof(ptr_float));
    // printf("Size of Array Pointer       \t:\t%d bytes\n", sizeof(ptr_arr));

    // int marks[] = {78,89,67,98};
    // printf("%p %p\n", marks, &marks);
    // printf("%d", *marks);


    // int val[] = {5,10,15};
    // int* ptr;
    // ptr = val; //  Assign address of val[0] to ptr, We can use ptr=&val[0];(both are same)
 
    // printf("Elements of the array are: ");
    // printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);


    // int arr[5] = { 1, 2, 3, 4, 5 };
    // int* ptr_arr = &arr;
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", *ptr_arr++);
    // }
    myFunction();

}


void myFunction() { //declaration
  printf("I just got executed!");
}
