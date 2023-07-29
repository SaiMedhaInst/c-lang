#include<stdio.h>

int fun(n1,n2) {
    return n1 + (n2-n1)/2;
}
int main() {

  int res = fun(10,20) + fun(2,7);
  printf("%d", res);  
  return 0;
}