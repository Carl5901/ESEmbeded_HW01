#include <stdio.h>
#include <stdlib.h>

void plus(int a, int b) { printf("%d + %d = %d\n", a, b, a + b); }
void minus(int a, int b) { printf("%d - %d = %d\n", a, b, a - b); }
void multiply(int a, int b) { printf("%d * %d =%d\n", a, b, a * b); }
void divided(int a, int b) { printf("%d / %d=%d\n", a, b, a / b); }
int main()
{
	int a, c,fun;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	static void (*command[])(int,int) = { plus, minus, multiply, divided};
	switch (b){
	case '+' : fun=0;break;
	case '-' : fun=1;break;
	case '*' : fun=2;break;
	case '/' : fun=3;break;
	default :fun=-1;
	}
	if(fun<0) printf("Wrong function!\n");
	command[fun](a,c);
	return 0;
}
