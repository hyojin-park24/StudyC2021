//피라미드 만들기

#include <stdio.h>

int main()
{
	int i, j, l;

	for (i = 1; i < 10; i++)
	{
		for ( j = 0; j < 10 - i ; j++)
		{
			printf(" ");
		}
		for ( l = 0; l < i * 2 -1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
			
	return 0;
}