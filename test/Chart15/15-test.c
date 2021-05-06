///*
//	1. 5명 학생의 국어, 영어, 수학, 체육 점수를 입력받는다.(2차원 배열 사용)
//	2. 개인별 총점과 평균을 구한다. (소수점 첫번째 짜리 까지만)
//	3. 과목별의 총점과 평균도 구하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void print_str1(int(*ppi)[4]);
//void subject_scr(int(*pa)[4]);
//
//int main()
//{
//	// 점수 입력 받기 위한 변수 선언
//	int score[5][4];
//	int i, j;
//
//	// 개인별 포인터 배열 선언 
//	// 2차원 배열이니 이중 포인터 선언 = 배열 포인터
//	
//
//	// 과목별 포인터 배열 선언 
//	// 2차원 배열이니 이중 포인터 선언 = 배열 포인터
//	
//
//	
//	
//
//	// 학생 국어,영어, 수학, 체육 점수 입력 받기
//	// 5명 학생 점수 입력 받기 
//	for (i = 0; i < 5; i++)							//학생
//	{
//		printf("국어, 영어, 수학, 체육 점수 입력 : ");
//		for (j = 0; j < 4; j++)						//과목
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
//// 개인별 과목 총점 및 평균
//void print_str1(int(* ppi)[4])
//{
//	
//	int i, j;
//	int total;
//	double avg;
//
//	for (i = 0; i < 5; i++)							//학생
//	{
//		total = 0;
//		for (j = 0; j < 4; j++)						//과목
//		{
//			
//			total += ppi[i][j];
//		}
//		avg = (double)total / 4.0;
//		printf("개인 별 총점 : %d, 평균 : %.1lf \n", total, avg);
//	}
//}
//
//void subject_scr(int(*pa)[4])
//{
//	int i, j, total;
//	double avg;
//	for ( i = 0; i < 4; i++)							//과목별 점수
//	{
//		total = 0;										
//		for (j = 0; j < 5; j++)							// 과목
//		{
//		total += pa[i][j];
//	}
//		avg = (double)total / 5;
//		printf("과목 별 총점 : %d, 평균 : %.1lf \n", total, avg);
//	}
//}