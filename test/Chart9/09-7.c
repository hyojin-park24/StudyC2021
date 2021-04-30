#include <stdio.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 10, b = 20;
	int temp;

	printf("바꾸기 전 a,b : %d, %d\n", a, b);
	temp = a;
	a = b;
	b = temp;

	printf("바꾸기 후 a,b : %d, %d\n", a, b);
	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
