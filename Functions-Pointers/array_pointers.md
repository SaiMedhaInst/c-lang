## C Pointers and Arrays

  

- In C programming language, pointers and arrays are closely related.

- An array name acts like a pointer constant.

- It Stores the address of first elemet i.e **base address**

  

```c

int marks[]  = {78,89,67,98};

printf("%p  %p\n", marks,  &marks);

printf("%d",  *marks);

```

  

```c

int val[]  = {5,10,15};

int* ptr;

ptr = val; // Assign address of val[0] to ptr, We can use ptr=&val[0];(both are same)

printf("Elements of the array are: ");

printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
printf("%d\n",  *ptr+4);
printf("%d\n", *(ptr+1));

```

  

![enter image description here](https://media.geeksforgeeks.org/wp-content/uploads/20230223170733/3.png)

  

### Accessing Array Elements using Pointer Arithmetic

![enter image description here](https://media.geeksforgeeks.org/wp-content/uploads/20230223170849/4.png)

```c

int  arr[5] = { 1, 2, 3, 4, 5 };

int* ptr_arr =  &arr;

for (int i =  0; i <  5; i++) { // traversing array using pointer arithmetic

printf("%d ", *ptr_arr++);

}

```

  
  

## Usage of pointers

- The C pointer is a very powerful tool that is widely used in C programming to perform various useful operations.

1. Pass Arguments by Reference

2. Accessing Array Elements

3. [Return Multiple Values from Function](https://www.geeksforgeeks.org/how-to-return-a-pointer-from-a-function-in-c/)

4. [Dynamic Memory Allocation](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

5. [Implementing Data Structures](https://www.geeksforgeeks.org/data-structures/)

6. In System-Level Programming where memory addresses are useful.

7. In locating the exact value at some memory location.

8. To avoid compiler confusion for the same variable name.

9. To use in Control Tables.

  

### Advantages of Pointers

  

- Pointers are used for dynamic memory allocation and deallocation.

- An Array or a structure can be accessed efficiently with pointers

- Useful for accessing memory locations.

- Used to form complex data structures such as linked lists, graphs, trees, etc.

- Reduce the length of the program and its execution time as well.

  

### Disadvantages of Pointers

  

Pointers are vulnerable to errors and have following disadvantages:

  

- Memory corruption can occur if an incorrect value is provided to pointers.

- Pointers are little bit complex to understand and majorly responsible for memory leaks in C

- Pointers are comparatively slower than variables in C.

- Uninitialized pointers might cause a segmentation fault.
