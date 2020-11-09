#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
		{
			printf("%dÊÇÆæÊý\n", i);
			
		}
		i++;
	}
	return 0;
}

//struct Book
//{
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	struct Book b1 = { "c++", 55 };
//	struct Book* p1 = &b1;
//
//	printf("%s, %d\n", b1.name, b1.price);
//	printf("%s, %d\n", p1->name, p1->price);
//	printf("%d\n", a);
//	*p = 30;
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	
//	return 0;
//}