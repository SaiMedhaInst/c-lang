#include<stdio.h>
#include<string.h>
#define MAX 50

void main(){


/*
    char str[4];
    printf("index 0 value %c\n", str[0]);
    printf("index 1 value %c\n", str[1]);
    printf("index 2 value %c\n", str[2]);
    printf("index 3 value %c\n", str[3]);

*/


//  way-1

/*
    char name[] = "SaiMedha";
    printf("%c\n",name[2]);
    printf("%c %d\n",name[8], name[8]);
      printf("%s\n", name);

*/

//way-2
/*
char str[6] = "Hello"; // storing \0 give extra one location
printf("%s",str);

*/

//way-3

/*

char name[] = {'R','a','m','\0'};
printf("%s",name);

*/

//way-4


/*

char name[4] = {'R','a','m','\0'};
printf("%s",name);


*/

// example-1

/*
char  str1[6] =  "Hello";

for(int i =0; str1[i] != '\0'; i++) {
	printf("%c %d\n",str1[i],str1[i]);
}

*/

    // example-2

/*
    char str[] = "SaiMedha";

    printf("%s\n", str);
 
    int length = 0;
    length = strlen(str);
    printf("Length of string str is %d\n", length);
    printf("character at index %d is %c\n", 2,str[2]);

*/


//reading string  way-1

/*
    char name[10];
    printf("enter name: ");
    scanf("%s", name);

    printf("my name is %s" , name);

*/

    //way-2
    
    /*
    char str[MAX];
    fgets(str, MAX, stdin);
 
    printf("String is: \n");

    puts(str);

    */

   //way3 scanset

/*
    char str[20];
    scanf("%[^\n]s", str);

    printf("%s", str);

*/

    char name[] = "kumar RajamOnI";
    strlwr(name);
    printf("%s\n",name);
    strupr(name);
    printf("%s\n",name);

}