## Pointers in C

-----------------------------------------------------

 ### Memory Address

- When a variable is created in C, a memory address is assigned to the variable.

- The memory address is the location of where the variable is stored on the computer.

- Memory address will be in the form of hexadecimals format

- ex: **0x7ffe5367e044**

  

- Whenever we assign a value to the variable, it is stored in this memory address.

- To access it, we use the reference operator (`&`)

  

```c

int myAge =  43;
printf("%p",  &myAge); // Outputs

```

![variable](https://everpath-course-content.s3-accelerate.amazonaws.com/instructor/ingrid_tay_microchip_com_zns384/public/1611189083/Pointers.1611189084079.png)

  

- A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the `%p` format specifier.

## what are pointers ?

- A **pointer** is a variable that **stores** the **memory address** of another variable as its value.

- A **pointer** is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.

- The use of pointers allows low-level memory access, dynamic memory allocation, and many other functionality in C.

  
  [**Pointers**](https://www.w3schools.com/c/c_pointers.php) are important in C, because they allow us to manipulate the data in the computer's memory - **this can reduce the code and improve the performance**.


**Note**

A **pointer variable**  **points** to a **data type** (like `int`) of the same type, and is created with the `*` operator.

  

syntax :

```c

datatype *ptr;

```

```c

int myAge =  20; // an int variable

int *ptr = &myAge; //ptr is a pointer variable stores address of myAge variable.

```

  
  

## How to Use Pointers?

-------------------------------------------------------------------------------------------------------------------------------------

1. Pointer Declaration

2. Pointer Initialization

3. Dereferencing

### 1. Pointer Declaration

- To declare a pointer, we use the ****( * ) dereference operator**** before its name.

****Example****

```c
int *ptr;
```

### 2. Pointer Initialization

- Pointer initialization is where we assign some initial value to the pointer variable.

- We use the ****( & ) address of operator**** to get the memory address of a variable and then store it in the pointer variable

****Example****

```c
int var = 10;

int * ptr;

ptr =&var;

```

### 3. Dereferencing

- Dereferencing a pointer is the process of accessing the value stored in the memory address specified in the pointer.

- We use the same ****( * ) dereferencing operator**** that we used in the pointer declaration.

  

![`dereferencing a pointer in c](https://media.geeksforgeeks.org/wp-content/uploads/20230223170531/2.png)

  

Example

```c

int myAge =  43;

int* ptr =  &myAge;

printf("%d\n", myAge);  

printf("%p\n",  &myAge);

printf("%p\n", ptr);

```

  
**Guess the output**

```c

int  main(){

int var =  10;

printf("%d", *&var);

return  0;

}

```

  

### Types of Pointers

### 1. Integer Pointers

- these are the pointers that point to the integer values.

****Syntax****:

```c

int *ptr;

```

- A pointer can point to any primitive data type.

- It can point to derived data types such as arrays and user-defined data types such as structures.

### 2. Array Pointer

- Pointers and Array are closely related to each other.

- Even the array name is the pointer to its first element. They are also known as **Pointer to Arrays**.

****Syntax****

```c
char *ptr = &array_name;

```

```c
    char name[] = "hello world";
    char *ptr = name;
    printf("%c\n",*ptr);
    printf("%p %c\n",ptr+1, *ptr+1);
    printf("%p %c\n",ptr+2, *ptr+2);
    printf("%p %c\n",ptr+3, *ptr+3);
```

### 3. Structure Pointer

  

- The pointer pointing to the structure type is called **Structure Pointer** or Pointer to Structure.

- It can be declared in the same way as we declare the other primitive data types.

- In C, structure pointers are used in data structures such as linked lists, trees, etc.

****Syntax****

```c
struct struct_name *ptr;
```

### 4. Function Pointers

- Function pointers point to the functions.

- They are different from the other pointers in the sense that instead of pointing to the data, they point to the code.

****Syntax****

  

```c

int (*ptr)(int, char);

```

**Note**: The syntax of the function pointers changes according to the function prototype.

### 5. Double Pointers

- A pointer that stores the memory address of another pointer.

- Such pointers are called **double-pointers** or pointers-to-pointer instead of pointing to a data value, they point to another pointer.

  

****Syntax****


```c

datatype ** pointer_name;

```

****Dereferencing Double Pointer****

```c
*pointer_name; // get the address stored in the inner level pointer  
**pointer_name; // get the value pointed by inner level pointer
 ```

****Note:**** In C, we can create **multi-level pointers** with any number of levels such as –

 ***ptr3, ****ptr4, ******ptr5 and so on.

### 6. NULL Pointer

- The **Null Pointers**are those pointers that do not point to any memory location.

- They can be created by assigning a NULL value to the pointer. A pointer of any type can be assigned the NULL value,

****Syntax****

```c

data_type *pointer_name =  NULL;

or

pointer_name=  NULL

```

### 7. Void Pointer

- The **Void pointers** in C are the pointers of type void.

- It means that they do not have any associated data type. They are also called ****generic pointers**** as they can point to any type and can be typecasted to any type.

  

****Syntax****

```c
void * pointer_name;
```

  

**Note:** One of the main properties of void pointers is that they cannot be dereferenced.

### 8. Wild Pointers

- The **Wild Pointers** are pointers that have not been initialized with something yet.

- These types of C-pointers can cause problems in our programs and can eventually cause them to crash.

****Example****

```c
int *ptr;
char *str;
```

### 9. Constant Pointers

- In constant pointers, the memory address stored inside the pointer is constant and cannot be modified once it is defined. It will always point to the same memory address.

****Syntax****

```c
const data_type * pointer_name;

```


### Size of Pointers in C
- The size of the pointers in C is equal for every pointer type. 
- The size of the pointer does not depend on the type it is pointing to.
-  It only depends on the **operating system and CPU architecture**. The size of pointers in C is

-   ****8 bytes**** for a ****64-bit System****
-   ****4 bytes**** for a ****32-bit System****

```c
    int level = 3;
    float fee = 50000.252;
    char grade = 'A';
    int marks[] = {78,89,67,98};

    int *ptr_int = &level;
    float *ptr_float = &fee;
    char *ptr_char = &grade;
    int *ptr_arr = marks;

    printf("Size of Integer Pointer     \t:\t%d bytes\n", sizeof(ptr_int));
    printf("Size of Character Pointer   \t:\t%d bytes\n",sizeof(ptr_char));
    printf("Size of Float Pointer       \t:\t%d bytes\n", sizeof(ptr_float));
    printf("Size of Array Pointer       \t:\t%d bytes\n", sizeof(ptr_arr));
```

## ****Pointer Arithmetic****

The [Pointer Arithmetic](https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/) refers to the legal or valid arithmetic operations
-   Increment in a Pointer
-   Decrement in a Pointer
-   Addition of integer to a pointer
-   Subtraction of integer to a pointer
-   Subtracting two pointers of the same type
-   Comparison of pointers of the same type.
-   Assignment of pointers of the same type.

```c
    int marks[] = { 90,78,96,82};
	int len = sizeof(marks)/sizeof(marks[0])
    int* ptr = marks;
 
    for (int i = 0; i < 3; i++) {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        ptr++;
    }
```
