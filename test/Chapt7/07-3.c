////반환값(출력)이 없는 함수
//
//#include <stdio.h>
//
//void print_char(char ch, int count);
//
//int main(void)
//{
//	print_char('@', 5);					// 문자와 숫자를 주고 함수 호출
//
//	return 0;
//}
//
//void print_char(char ch, int count)		// 매개변수(입력)는 있으나 반환형(출력)은 없다.
//{
//	int i;
//
//	for ( i = 0; i < count; i++)		// i는 0부터 cout-1까지 증가, count번 반복
//	{
//		printf("%c", ch);				// 매개변수 ch에 받은 문자 출력 
//	}
//}