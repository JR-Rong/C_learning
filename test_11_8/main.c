#include <stdio.h>
#include <string.h>


#define max 100 //定义标识符常量
#define MAX(x,y) (x>y?x:y) //定义宏

////static 修饰函数，改变了函数的链接属性，没有被修饰的函数具有外部链接属性，加了static就变成了内部链接属性
//extern int Add(int, int);
//int main()
//{
//	int a = 10, b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//static 修饰局部变量时，局部变量生命周期变长
//	//static 修饰全局变量时，改变了变量的作用域 - 静态全局变量只能在自己所在的源文件内部使用
//	extern int g_val;
//	//extern int a_val;
//	printf("%d\n", g_val);
//	while (i < 5)
//	{
//		static int a = 0;
//		a++;
//		printf("%d\n", a);
//		i++;
//	}
//}

//int main()
//{
//	int a = 10, b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//三目操作符 （exp1？exp2:exp3）exp1结果为真，则运行exp2，否则运行exp3
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，在++
//	int c = ++a;//前置++， 先++， 后使用
//	printf("a = %d, b = %d, c = %d", a, b, c);//a 11, b 10
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//4字节 32位 00000000000000000000000000000000
//	int b = ~a;// 11111111111111111111111111111111
//	int c = 1;
//	int d = ~c;
//	printf("%d, %d\n", a, b);
//	printf("%d, %d\n", c, d);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//不行
//	return 0;
//}