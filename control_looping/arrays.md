## Arrays & Strings

### Arrays

- Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
- Arrays value will store in contiguous memory location i.e easy to fetch, faster read/write
- To create an array, define the data type (like `int`) and specify the name of the array followed by **square brackets []**
- Arrays are mutable in C which we can change the values at index locations.

syntax:
```c
datatypes arrayName[];
``` 

```c
int myNumbers[] = {25, 50, 75, 100};

float employeSalaries[] = {10.5,12.5,17.5};

char studentGrades[] ={'A','B','A+','C'};
```
------------------------------------------------------------------------------------------------------------------------------------
### Access the Elements of an Array

To access an array element, refer to its **index number**.

- Array indexes start with  **0**: [0] is the first element. [1] is the second element, etc.

```c
int myNumbers[] = {25, 50, 75, 100};  
printf("%d", myNumbers[0]);
```
------------------------------------------------------------------------------------------------------------------------------------
- To change the value of a specific element, refer to the index number:
```c
int myNumbers[] = {25, 50, 75, 100};  
myNumbers[0] = 33;  
  
printf("%d", myNumbers[0]);
```

------------------------------------------------------------------------------------------------------------------------------------

- You can loop through the array elements with the `for` loop.

```c
  int myNumbers[] = {25, 50, 75, 100};  
  int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

  for (int i = 0; i < n; i++) {  
       printf("%d\n", myNumbers[i]); 
  }
```

------------------------------------------------------------------------------------------------------------------------------------

- Another common way to create arrays, is to specify the size of the array, and add elements later:
```c
// Declare an array of four integers:  
int myNumbers[4];  
  
// Add elements  
myNumbers[0] = 25;  
myNumbers[1] = 50;  
myNumbers[2] = 75;  
myNumbers[3] = 100;
```

## Try it
------------------------------------------------------------------------------------------------------------------------------------
1. Can we access invalid index location, if yes what would be the data it will be printed?
```c
int  myNumbers[]  = {25, 50, 75, 100};
printf("%d" , myNumbers[6]);
```
2. what's output?

```c
int[] myNumbers = {25, 50, 75, 100};
printf("%d" , myNumbers[2]);
```

3. What's output?
```c
float  myData[]  = {25, 50, 75, 100,'B',2.5};
printf("%f" , myData[4]);
```

## Multidimensional Arrays

- A multidimensional array is basically an array of arrays.
- Arrays can have any number of dimensions.
- Multidimensional Arrays are mainly used for storing nested data.

		`[][][][][]`

		`[][][][][]`

		`[][][][][]`

		`[][][][][]`

		`[][][][][]`

### Two-Dimensional Arrays

- A 2D array is also known as a matrix (a table of rows and columns).
- To create a 2D array of integers,
```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
```

![array2D](https://i.imgur.com/cYTvJh1.png)

#### Access the Elements of a 2D Array

- To access an element of a two-dimensional array, you must specify the index number of both the row and column.
- This statement accesses the value of the element in the  **first row (0)**  and  **third column (2)**  of the  **matrix**  array.
- Array indexes start with 0: [0] is the first element. [1] is the second element
```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };  
printf("%d", matrix[0][2]);
```

------------------------------------------------------------------------------------------------------------------------------------
- To change the value of an element, refer to the index number of the element in each of the dimensions:

```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };  
matrix[0][0] = 9;    
printf("%d", matrix[0][0]);
```

---------------------------------------------------------------------------------------------------------------------------------
## Loop Through a 2D Array
- To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
- Outer loop for traversing rows, inner loop for traversing columns.  
- Combing both [rowIndex][columnIndex]  will fetch the value.
```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}
```



