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
//	printf("ù��° ���� �Է��ϼ��� : ");        
//	scanf("%d", &a);
//
//	printf("�ι�° ���� �Է��ϼ��� : ");
//	scanf("%d", &b);
//
//	printf("���ϴ� ������ �Է��ϼ��� : ");
//	scanf(" %c", &cal);
//
//	switch (cal)                                
//	{
//	case '+':                                  
//		result = sum(a, b);
//		printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, result);  
//		break;
//	case '-':
//		result = sub(a, b);
//		printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, result);
//		break;
//	case '*':
//		result = mul(a, b);
//		printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, result);
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("0���� ���� �� �����ϴ�.\n");
//			main();
//		}
//		else
//		{
//			result = div(a, b);
//			printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, result);
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