#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a;
	char b;
	printf("���� �ϳ��� �Է��ϼ��� : $");
	scanf("%d", &a);
	//getchar(); ���ۿ� �ִ� enter���� �鿩��

	printf("���� �ϳ��� �Է��ϼ��� : $");
	scanf(" %c", &b);

	// ���� scanf�� ���� �� ���ۿ� enter���� ���ڷ� ���� ������ �����̽� �θ� �����

	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);


	return 0;
}