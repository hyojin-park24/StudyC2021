//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*�Լ� �����*/
//void print_ary(int *pa, int size);
//void swap_ary(int *pb, int size);
//void input_ary(int* pa, int size);
//
//int main()
//{
//	int ary[10];
//
//	//int ary_size = sizeof(ary);
//	//int ary0_size = sizeof(ary[0]);
//	int size = sizeof(ary) / sizeof(ary[0]);
//	//int size = ary_size / ary0_size;// �迭�� ����
//
//	input_ary(ary, size);	// �Է��Լ�
//
//	swap_ary(ary, size);	// �ٲٴ� �Լ�
//
//	print_ary(ary, size);	// ��� �Լ�
//}
//
//void input_ary(int* pa, int size)
//{
//	int i;
//	
//	//printf("%d���� ������ �Է� : ", size);	// ���̶� ���� ��
//	printf("%d���� ������ �Է� : ", size);
//
//	for (i = 0; i < size; i++)
//	{
//		scanf("%d", pa + i);
//	}
//}
//
//void print_ary(int* pa, int size)
//{
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("ary[%d] = %d\n", i, pa[i]);
//	}
//	printf("\n");
//
//	/*for (i = size - 1; i >= 0; i--)
//	{
//		printf("ary[%d] = %d\n", i, pa[i]);
//	}*/
//}
//
//void swap_ary(int* pa, int size)
//{
//	int i, j;
//	
//	for (i = 0; i < 5; i++)
//	{
//		j = size - 1 - i;
//		
//		int temp = pa[i];
//		pa[i] = pa[j];
//		pa[j] = temp;
//	}
//}
//
