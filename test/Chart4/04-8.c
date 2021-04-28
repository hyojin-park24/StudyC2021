//// 형변환 연산자
//#include<stdio.h>
//// 좌항에 있는 대입연산자는 형변환 시킬 수 없음 
//// 항상 우항에 있는 연산자만 가능, 좌항은 저장할 수 있는 공간이기 때문에
//int main()
//{
//	int a = 20, b = 3;
//	double res;
//
//	res = ((double)a) / ((double)b);				//double을 사용해 a와 b의 값을 실수로 변환
//	printf("a = %d, b= %d\n", a, b);
//	printf(" a/b의 결과 : %.1lf\n", res);
//
//	a = (int)res;									//int를 사용해 res값에서 정수 부분만 추림
//	printf("(int) %.1lf의 결과 :  %d\n", res, a);
//
//	return 0;
//}