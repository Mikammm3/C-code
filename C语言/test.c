#define  CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////定义一个结构体（复杂对象）然后列出名字价格
////struct Book
////{
////	char name[20];
////	short price;
///*}*/;//别忘记加;
//
////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
//
//
//
////int Max(int x, int y) 
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
//
//
//
//
//
//
//
//
//
//int main()
//{
//	///*printf("Hello,World!");*/
//	//struct Book b1 = { "C语言程序设计",55 };//利用结构体类型创建一个该类型的结构体变量
//	//printf("书名：%s\n", b1.name);//输出b1.后缀
//	//printf("价格：%d\n", b1.price);
//	/*int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);*/
//	/*int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("Max=%d", max);
//*/
///*int a = 10;
//int b = 20;
//int max = (a > b ? a : b);
//printf("max=%d", max);*/


//
//#include  <stdio.h>
//int main()
//{
//
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//
//	
//	else
//	{
//	  if (age >= 18 && age < 28)
//	printf("青年\n");
//	else if (age >= 28 && age < 50)
//	printf("中年\n");
//	else if (age >= 50 && age<90)
//	printf("老年\n");
//	else
//	printf("老不死\n");
//	}
//	return 0;
//}

//#include  <stdio.h>

//#define MAX(X,Y)(X>Y?X:Y)
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
	/*int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);*/
	/*int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max=%d\n", max);*/
//#include  <stdio.h>
//int main()
//{
//	int a = 100;
//	printf(" % p\n", &a);
//	int* p = &a;
//	*p = 20;
//	printf("%p\n",& *p);
//
//
//
//	return 0;
//}
                    
//以后在VS中使用scanf应换成scanf_s


//#include  <stdio.h>
//int main()
//{
////判断一个数是否为奇数
//	printf("请输入一个整数");
//	int a = 0;
//	scanf_s("%d", &a);
//	if (1 == a % 2)
//		printf("该数为一个奇数，且值为%d\n", a);
//	else
//		printf("该数为一个偶数,数值为%d\n", a);
//
//	return 0;
//}



//判断一个数是否为奇数，并且列出1-100的奇数

#include<stdio.h>
int main()
{
	int a = 1;
	while (a <= 100)

	{
		if (1 == a % 2 && a <= 100)
		{
			printf("该数为奇数,且数值为%d\n", a);
			a++;
		}
		else
		{
			printf("该数为偶数,且数值为%d\n", a);
			a++;
		}
	}


	return 0;
}







