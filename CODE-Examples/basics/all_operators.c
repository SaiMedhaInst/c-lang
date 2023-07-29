# include<stdio.h>

int main(int argc, char const *argv[])
{
    
    // Arthimetic operators , + - * / % ++ --
	int x=10;
	x+=(x++)+(++x)+x;
	printf("%d",x);
    return 0;
}
