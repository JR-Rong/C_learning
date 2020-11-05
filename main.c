#include <stdio.h>

int global = 1;

int main()
{
	int a=0;
	int b=0;
	int sum;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	printf("global is : %d\n", global);
	printf("hello world!\n");
	return 0;
}