#include<stdio.h>

int fun(int n);

int main() {
    fun(5);
    return 0;
}

int fun(int num) {
    if (num == 0) 
        return 1;
    printf("%d\n", num);
    fun(num-1);
}
