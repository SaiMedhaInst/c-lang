#include<stdio.h>

void main()
{

    // int rank = 41;
    // printf("my rank is %d\n", rank);
    // printf("address of rank variable is %p\n", &rank);

    // int myAge = 18;
    // int *ptr;
    // printf("%p", ptr);


    // int myAge =  43;

    // int* ptr =  &myAge;

    // printf("%p\n",  &myAge);

    // printf("%p\n", ptr);

    // printf("value at adress %p is %d\n", ptr, *ptr);



    // char name[] = "hello world";
    // char *ptr = name;
    // printf("%p %c\n",ptr, *ptr);
    // printf("%p %c\n",ptr+1, *(ptr+1));
    // printf("%p %c\n",ptr+2, *(ptr+2));
    // printf("%p %c\n",ptr+3, *(ptr+3));

    // int a = 10;
    // int *ptr = &a;
    // int **ptr2 = &ptr;

    // printf("%p %p %p\n", &a,ptr,ptr2);
    // printf("%p %p\n", &ptr, ptr2);

    // printf("%p %p\n", ptr , *ptr2);

    // printf("%d\n", **ptr2);

    // int *ptr = NULL; // NULL pointer.
    // printf("adress of ptr %p", ptr);

    // int a = 10;
    // int b = 20;
    // int* const ptr = &a;
    // printf("address of ptr %p\n", ptr);
 
    // ptr = &b;
    // printf("address of ptr %p\n", ptr);


    // long long a = 10;
    // printf("size of variable a %d\n", sizeof(a));

    // long long *ptr = &a;
    // printf("size of pointer is %d\n", sizeof(ptr));

    // char name[] = "hello world";
    // char *ptr_char = name;

    // printf("size of char pointer %d", sizeof(ptr_char));

/*
    int marks[] = { 90,78,96,82};
	int len = sizeof(marks)/sizeof(marks[0]);
    int* ptr = marks;
 
    for (int i = 0; i <4; i++) {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        ptr++;
    }

*/


/*
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    *ptr += 5;
    printf(" x  = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

*/

/*
			float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
			float *ptr1 = &arr[0];
			float *ptr2 = ptr1 + 3;
		 
			printf("%f\n", *ptr2);
            printf("%p %p\n", ptr1, ptr2);
			printf("%d\n", ptr2 - ptr1);

*/

	// int arri[] = {1, 2 ,3};
    // int *ptri = arri;
 
    // char arrc[] = {1, 2 ,3};
    // char *ptrc = arrc;
 
    // printf("sizeof arri[] = %d\n", sizeof(arri));
    // printf("sizeof ptri = %d\n", sizeof(ptri));
 
    // printf("sizeof arrc[] = %d\n", sizeof(arrc));
    // printf("sizeof ptrc = %d\n", sizeof(ptrc));


    // char *ptr = "SaiMedha";
	// printf("%c\n", *&*&*ptr);

    // int a; 
    // char *x; 
    // x = (char *) &a; 
    // a = 512; 
    // x[0] = 5; 
    // x[1] = 2; 
    // printf("%d\n",a); 
    // printf("%d\n", *x);


//     int val[]  = {5,10,15};

// int* ptr;

// ptr = val; // Assign address of val[0] to ptr, We can use ptr=&val[0];(both are same)

// printf("Elements of the array are: ");

// printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
// printf("%d\n",  *ptr+4);
// printf("%d\n", *(ptr+1));


    // char *ptr = "SaiMedha";
    // printf("%c", (*&*&*ptr)+1);


    int marks[]  = {78,89,67,98};

    printf("%p  %p\n", marks,  &marks);

    printf("%d\n",  *marks);
    printf("%d\n", *(marks+2));

}