//#include <stdio.h>
//
//union student					//공용체 선언
//{
//	int num;					// 학번을 저장할 멤버
//	double grade;				// 학점을 저장할 멤버
//};
//
//struct student1
//{
//	int num;
//	double grade;
//};
//
//int main()
//{
//	union student s1 = { 3.14 };	// 공용체 변수의 선언과 초기화
//	struct student1 s2;
//
//	printf("학번 : %d", s1.num); // 학번 멤버 출력
//	s1.grade = 4.4;			// 학점 멤버에 값 대입
//
//	printf("학점 : %.1lf\n", s1.grade);
//
//	s1.num = 315;					
//	// 공용체는 저장공간을 하나로 공유하기 때문에 num출력하기 위해
//	// 다시 값을 입력해 줘야함 
//	printf("학번 : %d\n", s1.num);	// 학번 다시 출력
//
//	printf("%d\n", sizeof(s2));
//	
//
//	return 0;
//}