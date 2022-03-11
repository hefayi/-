#include<stdio.h>
////#define _CRT_SECURE_NO_WARNINGS 
//int main()
//{
//	/*int day = 0;
//	scanf("%d\n", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	return 0;*/
//	//switch case 语句
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//括号里必须是整形
//	{
//		//
//	case 1:
//		/*if (day == 1)
//			printf("hehe\n");*/
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://无顺序，建议放最后
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//
//
//}
//int main()
//{
//
//	while(1)//if (1)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//
//	while (i<=10)
//	{
//		
//		if (i == 5)
//			continue;//break;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//getchar接收键盘输入的一个字符putchar 输出一个字符
int main()
{
	int ch = 0;//getchar();
	//ctrl+z=EOF
	//EOF-end of file->-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//putchar(ch);//
	return 0;
}