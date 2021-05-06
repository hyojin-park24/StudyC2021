///*
//	1. 5명 학생의 국어, 영어, 수학, 체육 점수를 입력받는다.(2차원 배열 사용)
//	2. 개인별 총점과 평균을 구한다. (소수점 첫번째 짜리 까지만)
//	3. 과목별의 총점과 평균도 구하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int score[5][4];								
//	int total;
//	double avg;
//	int i, j;
//
//	// 학생 국어,영어, 수학, 체육 점수 입력 받기
//	// 5명 학생 점수 입력 받기 
//	for ( i = 0; i < 5; i++)							//학생
//	{
//		printf("국어, 영어, 수학, 체육 점수 입력 : ");
//		for ( j = 0; j < 4; j++)						//과목
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	// 개인별 총점 및 평균 내기 
//	for ( i = 0; i < 5; i++)							//학생
//	{
//		total = 0;
//		for ( j = 0; j < 4; j++)						//과목
//		{
//			total += score[i][j];
//		}
//		avg = (double)total / 4.0;
//		printf("개인 별 총점 : %d, 평균 : %.1lf \n", total, avg);
//	}
//
//	// 과목별 총점 및 평균 내기 
//	for ( i = 0; i < 4; i++)							//과목별 점수
//	{
//		total = 0;										
//		for (j = 0; j < 5; j++)							// 과목
//		{
//			total += score[i][j];
//		}
//		avg = (double)total / 5;
//		printf("과목 별 총점 : %d, 평균 : %.1lf \n", total, avg);
//	}
//
//
//	return 0;
//}