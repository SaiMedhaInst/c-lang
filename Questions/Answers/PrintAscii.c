#include<stdio.h>
#include<limits.h>
void main() {

    int start = 0;
    int range = UCHAR_MAX;

    for(int i = start ; i<=range; i++) {
        printf("ASCII value of character %c = %d\n", i, i);
    }


}