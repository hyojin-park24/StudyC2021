//���� v3
// �ϴ� ���߿� �ٽ� �պ��� ���� 7�� �ؾ��� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int sum(int , int);
int sub(int , int);
int mul(int , int);
int div(int , int);

int main(void)
{
	int (*fp)(int, int);

	int  a, b;
	char cal;
	int result;
	
	printf("ù��° ���� �Է��ϼ��� : ");        
	scanf("%d", &a);
	
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf(" %c", &cal);

	switch (cal)                                
	{
	case '+':                                  
		func(sum);
		break;
	case '-':
		func(sub);
		break;
	case '*':
		func(mul);
		break;
	case '/':
		if (b == 0)
		{
			printf("0���� ���� �� �����ϴ�.\n");
			main();
		}
		else
		{
			func(div);
			break;
		}
	default:
		break;
	}

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul (int a, int b)
{
	return(a * b);
}

int div(int a, int b)
{
	return(a / b);
}