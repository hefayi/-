#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	/*int day = 0;
	scanf("%d\n", &day);
	if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	return 0;*/
	//switch case 语句
	int day = 0;
	scanf("%d", &day);
	switch (day)//括号里必须是整形
	{
	case 1://整形常量表达式
			printf("星期1\n");
			break;
	case 2:
				printf("星期2\n");
				break;
	case 3:
					printf("星期3\n");
					break;
	case 4:
						printf("星期4\n");
						break;
	case 5:
							printf("星期5\n");
							break;
	case 6:
								printf("星期6\n");
								break;
	case 7:
									printf("星期天\n");
									break;
	}
	return 0;
}