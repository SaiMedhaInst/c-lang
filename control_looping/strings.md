# Strings in c

- A String is a sequence of characters terminated with a null character ‘\0’. 
- The C String is stored as an array of characters. 
- The difference between a character array and a C string is the string is terminated with a unique character ‘\0’.

![enter image description here](https://i.imgur.com/QRaz8M3.png)

**syntax**
- Declaring a string in C is as simple as declaring a one-dimensional array.
```
char string_name[size];
```

**Ways to Initialize a String in C**

1. Assigning a string literal without size
- String literals can be assigned without size. 
- Here, the name of the string str acts as a pointer because it is an array.

```c
char str[] = "SaiMedha";
```

2.Assigning a string literal with a predefined size
- String literals can be assigned with a predefined size. But we should always account for one extra space which will be assigned to the null character.
- If we want to store a string of size n then we should always declare a string with a size equal to or greater than n+1.

```c
char str[8] = "SaiMedha";
```

3. Assigning character by character with size
- We can also assign a string character by character. 
- But we should remember to set the end character as ‘\0’ which is a null character.

```c
char str[3] = {'H','i','\0'};
```

4. Assigning character by character without size.

- We can assign character by character without size with the NULL character at the end. 
- The size of the string is determined by the compiler automatically.
```c
char str[] = {'H','i','\0'};
```

**Note**
 When a Sequence of characters enclosed in the double quotation marks is encountered by the compiler, a null character ‘\0’ is appended at the end of the string by default.


