#include <stdio.h>
#include <string.h>


#define max 100 //�����ʶ������
#define MAX(x,y) (x>y?x:y) //�����

////static ���κ������ı��˺������������ԣ�û�б����εĺ��������ⲿ�������ԣ�����static�ͱ�����ڲ���������
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
//	//static ���ξֲ�����ʱ���ֲ������������ڱ䳤
//	//static ����ȫ�ֱ���ʱ���ı��˱����������� - ��̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
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
//	max = (a > b ? a : b);//��Ŀ������ ��exp1��exp2:exp3��exp1���Ϊ�棬������exp2����������exp3
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
//	int b = a++;//����++����ʹ�ã���++
//	int c = ++a;//ǰ��++�� ��++�� ��ʹ��
//	printf("a = %d, b = %d, c = %d", a, b, c);//a 11, b 10
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//4�ֽ� 32λ 00000000000000000000000000000000
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
//	//printf("%d\n", sizeof int);//����
//	return 0;
//}