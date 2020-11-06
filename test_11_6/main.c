#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//全局常量
#define PI = 10


//枚举常量
enum COLOR
{
	red,
	blue,
	green
};

int main()
{
	int a=0, b=0;
	const max = 10;
	enum COLOR x = red;

	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d, %d\n", strlen(arr1), strlen(arr2));
		
	return 0;
}