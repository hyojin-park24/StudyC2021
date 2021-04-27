#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a;
	char b;
	printf("정수 하나를 입력하세요 : $");
	scanf("%d", &a);
	//getchar(); 버퍼에 있는 enter값을 들여씀

	printf("문자 하나를 입력하세요 : $");
	scanf(" %c", &b);

	// 정수 scanf를 받을 때 버퍼에 enter값이 문자로 들어가기 때문에 스페이스 두면 실행됨

	printf("입력된 값은 %d, %c 입니다.\n", a, b);


	return 0;
}