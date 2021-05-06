//계산기 v3
// 일단 나중에 다시 손보기 예제 7로 해야함 
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
	
	printf("첫번째 수를 입력하세요 : ");        
	scanf("%d", &a);
	
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &b);
	
	printf("원하는 연산을 입력하세요 : ");
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
			printf("0으로 나눌 수 없습니다.\n");
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