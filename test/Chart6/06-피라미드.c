//피라미드 만들기

#include <stdio.h>

int main()
{
	int i , j;

	for (i = 0; i <6; i++)
	{
		for ( i = 0; i <1 ; i++)
		{
			printf("      ");

			for ( j = 0; j < 1; j++)
			{
				printf("*");
			}
		}

	}
	
			
	return 0;
}