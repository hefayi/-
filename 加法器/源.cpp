#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{//++，--操作符
//	int a = 10;
//	//int b=a++;//后置++ 先使用 后++
//	//int b=++a;/前置++，先++，后使用。
//	//int b=a--;//后置--，先使用，后--
//	int b = --a;//前置--，先--，再使用
//	printf("a=%d b=%d/n", a, b);
//	return 0;
//
//}
//(类型)——强制类型转换
//int main()
//{
//	int a = (int)3.14;//double——>int
//	return 0;
//}
//int main()
//{
//	//真-非零
//	//假-0
//	//&&-逻辑与
//	//||-逻辑或
//	int a = 0;//int a=非0
//	int b = 5;;
//	int c = a || b;	 //int c = a && b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 60;
//	int b = 50;
//		int max = 0;
//		max = (a > b ? a : b);//三步操作符（exp1？exp2;exp3）即1真输出2，1假输出3
		//printf("%d", max);
		//if (a > b)
			//printf("%d", a);
//	else
			//printf("%d",b);
	
//	return 0;
//}
//int ADD(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//
//	//int arr[10] = { 0 };
//	//arr[4];//[]-下标引用操作符
//	int a = 100;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量。
//
//}
//int main()
//{//tfpedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	unsigned int num1 = 20;
//	u_int num2 = 20;
//	return 0;
//}
//void text()
//{//static修饰局部变量
//	//局部变量的生命周期变长
// static修饰全局变量作用域-让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就不能使用了
//static 修饰函数
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//		while (i < 5)
//		{
//			text();
//			i++;
//		}
//	return 0;
//}
//extern int Add(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//		printf("%d\n", sum);
//	return 0;
//}
//#define可以定义标识符常量
//#define MAX 100
//define 可以定义宏函数
//int MAX(int x, int y);
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
////宏定义
//#define MAX(X,Y)（X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max= MAX(a, b);
//	printf("%d\n,max");
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}
//指针 
//int main()
//{
//	int a = 10;//4个字符
//	int* p=&a;//取地址
//	//p为变量，用来存放地址的-指针变量
//	//printf("%p\n", &a);
//	//printf("%p\n", p)
//	*p=20;//*-解引用操作符
//	printf("%d\n", a);
//	return 0;


//}
//
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf(" % d\n", sizeof(pd));//32位-4个字节，64位-8个字节
//	/**pd = 5.5;
//	printf("%lf\n", *pd);*/
//	//int a = 10;//申请了4个字节的空间
//	///*printf("%p\n", &a);*/
//	//int* p = &a;//p是一个指针变量
//	////printf("%p\n", p)；
//	//*p=20;//*-解引用操作符
//	//printf("%d\n", a);
//	return 0;
//}
//结构体
//已学过的类型char int double long shot
//人 书等物品该如何表示？
//物品-复杂对象
//复杂对象-结构体-我们自己创造的一种类型
//struct结构体关键字
//创建一个结构体类型
//struct Book
//{
//	char name[20];//高数书
//	short price;//50
//
//};
//int main()
//{//利用结构体类型-创建一个该类型的结构体变量
//	struct Book n1 = { "高数书",55 };
//	struct Book* p = &n1;
//	//n1.name=语文  不能用，因为它是一个数组名，本质上是一个数组，可以用strcpy();->string copy-字符串拷贝-库函数-头文件string.h
//	strcpy(n1.name, "c++");  
//	//n1.price=15是一个变量可以直接赋值。
//	/*printf("%s\n", p->name);
//	printf("%d\n", p->price);*/
//	//. 结构体变量.成员
//	//->结构体指针->成员
//	/*printf("%s\n", (*p).name);
//	printf("%d\n", (*p).price);*/
//
//	/*printf("书名:%s\n", n1.name);
//	printf("价格:%d\n", n1.price);
//	n1.price = 15;
//	printf("修改后的价格:%d\n", n1.price);*/
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int z = 0;
	scanf("%d%d\n", &a, &b);
	z = (a > b ? a : b);
	printf("%d\n", z);
	return 0;
}

