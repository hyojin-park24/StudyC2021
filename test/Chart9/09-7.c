#include <stdio.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 10, b = 20;
	int temp;

	printf("�ٲٱ� �� a,b : %d, %d\n", a, b);
	temp = a;
	a = b;
	b = temp;

	printf("�ٲٱ� �� a,b : %d, %d\n", a, b);
	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
