#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{//++��--������
//	int a = 10;
//	//int b=a++;//����++ ��ʹ�� ��++
//	//int b=++a;/ǰ��++����++����ʹ�á�
//	//int b=a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a=%d b=%d/n", a, b);
//	return 0;
//
//}
//(����)����ǿ������ת��
//int main()
//{
//	int a = (int)3.14;//double����>int
//	return 0;
//}
//int main()
//{
//	//��-����
//	//��-0
//	//&&-�߼���
//	//||-�߼���
//	int a = 0;//int a=��0
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
//		max = (a > b ? a : b);//������������exp1��exp2;exp3����1�����2��1�����3
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
//	//arr[4];//[]-�±����ò�����
//	int a = 100;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	register int a = 10;//�����a����ɼĴ���������
//
//}
//int main()
//{//tfpedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	unsigned int num1 = 20;
//	u_int num2 = 20;
//	return 0;
//}
//void text()
//{//static���ξֲ�����
//	//�ֲ��������������ڱ䳤
// static����ȫ�ֱ���������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ��Ͳ���ʹ����
//static ���κ���
//	static int a = 1;//a��һ����̬�ľֲ�����
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
//#define���Զ����ʶ������
//#define MAX 100
//define ���Զ���꺯��
//int MAX(int x, int y);
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
////�궨��
//#define MAX(X,Y)��X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max= MAX(a, b);
//	printf("%d\n,max");
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}
//ָ�� 
//int main()
//{
//	int a = 10;//4���ַ�
//	int* p=&a;//ȡ��ַ
//	//pΪ������������ŵ�ַ��-ָ�����
//	//printf("%p\n", &a);
//	//printf("%p\n", p)
//	*p=20;//*-�����ò�����
//	printf("%d\n", a);
//	return 0;


//}
//
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf(" % d\n", sizeof(pd));//32λ-4���ֽڣ�64λ-8���ֽ�
//	/**pd = 5.5;
//	printf("%lf\n", *pd);*/
//	//int a = 10;//������4���ֽڵĿռ�
//	///*printf("%p\n", &a);*/
//	//int* p = &a;//p��һ��ָ�����
//	////printf("%p\n", p)��
//	//*p=20;//*-�����ò�����
//	//printf("%d\n", a);
//	return 0;
//}
//�ṹ��
//��ѧ��������char int double long shot
//�� �����Ʒ����α�ʾ��
//��Ʒ-���Ӷ���
//���Ӷ���-�ṹ��-�����Լ������һ������
//struct�ṹ��ؼ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];//������
//	short price;//50
//
//};
//int main()
//{//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book n1 = { "������",55 };
//	struct Book* p = &n1;
//	//n1.name=����  �����ã���Ϊ����һ������������������һ�����飬������strcpy();->string copy-�ַ�������-�⺯��-ͷ�ļ�string.h
//	strcpy(n1.name, "c++");  
//	//n1.price=15��һ����������ֱ�Ӹ�ֵ��
//	/*printf("%s\n", p->name);
//	printf("%d\n", p->price);*/
//	//. �ṹ�����.��Ա
//	//->�ṹ��ָ��->��Ա
//	/*printf("%s\n", (*p).name);
//	printf("%d\n", (*p).price);*/
//
//	/*printf("����:%s\n", n1.name);
//	printf("�۸�:%d\n", n1.price);
//	n1.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", n1.price);*/
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

