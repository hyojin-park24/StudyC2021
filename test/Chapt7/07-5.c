//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int sub(int a, int b);
//int sub(int a, int b);
//int mul(int a, int b);
//int div(int a, int b);
//
//int main(void)
//{
//	int  a, b;
//	char cal;
//	int result;
//
//	printf("첫번째 수를 입력하세요 : ");        
//	scanf("%d", &a);
//
//	printf("두번째 수를 입력하세요 : ");
//	scanf("%d", &b);
//
//	printf("원하는 연산을 입력하세요 : ");
//	scanf(" %c", &cal);
//
//	switch (cal)                                
//	{
//	case '+':                                  
//		result = sum(a, b);
//		printf("%d %c %d은(는) %d입니다.", a, cal, b, result);  
//		break;
//	case '-':
//		result = sub(a, b);
//		printf("%d %c %d은(는) %d입니다.", a, cal, b, result);
//		break;
//	case '*':
//		result = mul(a, b);
//		printf("%d %c %d은(는) %d입니다.", a, cal, b, result);
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("0으로 나눌 수 없습니다.\n");
//			main();
//		}
//		else
//		{
//			result = div(a, b);
//			printf("%d %c %d은(는) %d입니다.", a, cal, b, result);
//			break;
//		}
//	default:
//		break;
//	}
//
//	return 0;
//}
//
//int sum(int a, int b)
//{
//	int res;
//	res = a + b;
//
//	return res;
//}
//
//int sub(int a, int b)
//{
//	int res;
//
//	res = a - b;
//
//	return res;
//}
//
//int mul (int a, int b)
//{
//	int res;
//
//	res = a * b;
//
//	return res;
//}
//
//int div(int a, int b)
//{
//	int res;
//
//	res = a / b;
//
//	return res;
//}