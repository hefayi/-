#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	/*int day = 0;
	scanf("%d\n", &day);
	if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	return 0;*/
	//switch case ���
	int day = 0;
	scanf("%d", &day);
	switch (day)//���������������
	{
	case 1://���γ������ʽ
			printf("����1\n");
			break;
	case 2:
				printf("����2\n");
				break;
	case 3:
					printf("����3\n");
					break;
	case 4:
						printf("����4\n");
						break;
	case 5:
							printf("����5\n");
							break;
	case 6:
								printf("����6\n");
								break;
	case 7:
									printf("������\n");
									break;
	}
	return 0;
}