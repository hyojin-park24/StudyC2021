///*
//	1. 5�� �л��� ����, ����, ����, ü�� ������ �Է¹޴´�.(2���� �迭 ���)
//	2. ���κ� ������ ����� ���Ѵ�. (�Ҽ��� ù��° ¥�� ������)
//	3. ������ ������ ��յ� ���Ͻÿ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void print_str1(int(*ppi)[4]);
//void subject_scr(int(*pa)[4]);
//
//int main()
//{
//	// ���� �Է� �ޱ� ���� ���� ����
//	int score[5][4];
//	int i, j;
//
//	// ���κ� ������ �迭 ���� 
//	// 2���� �迭�̴� ���� ������ ���� = �迭 ������
//	
//
//	// ���� ������ �迭 ���� 
//	// 2���� �迭�̴� ���� ������ ���� = �迭 ������
//	
//
//	
//	
//
//	// �л� ����,����, ����, ü�� ���� �Է� �ޱ�
//	// 5�� �л� ���� �Է� �ޱ� 
//	for (i = 0; i < 5; i++)							//�л�
//	{
//		printf("����, ����, ����, ü�� ���� �Է� : ");
//		for (j = 0; j < 4; j++)						//����
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//	
//	print_str1(score);
//	printf("\n");
//	subject_scr(score);
//	printf("\n");
//
//	return 0;
//}
//
//// ���κ� ���� ���� �� ���
//void print_str1(int(* ppi)[4])
//{
//	
//	int i, j;
//	int total;
//	double avg;
//
//	for (i = 0; i < 5; i++)							//�л�
//	{
//		total = 0;
//		for (j = 0; j < 4; j++)						//����
//		{
//			
//			total += ppi[i][j];
//		}
//		avg = (double)total / 4.0;
//		printf("���� �� ���� : %d, ��� : %.1lf \n", total, avg);
//	}
//}
//
//void subject_scr(int(*pa)[4])
//{
//	int i, j, total;
//	double avg;
//	for ( i = 0; i < 4; i++)							//���� ����
//	{
//		total = 0;										
//		for (j = 0; j < 5; j++)							// ����
//		{
//		total += pa[i][j];
//	}
//		avg = (double)total / 5;
//		printf("���� �� ���� : %d, ��� : %.1lf \n", total, avg);
//	}
//}