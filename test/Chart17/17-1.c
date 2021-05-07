//#include <stdio.h>
//
//struct student							// 구조체 선언
////예약어 , 구조체 이름
//// {} 구조체 멤버 
//// 구조체 - 함수 가질 수 없고, 변수만 가질 수 있음 
//{
//	int num;							// int형 멤버 변수 선언
//	double grade;						// double형 학점 변수 선언
//}; //;빠뜨리면 안돼!
//
//int main()
//{
//	struct student s1;					// struct student형의 변수 선언
//
//	s1.num = 2;							// 2를 s1.num에 저장
//	// '.'은 멤버 접근 연산자 
//	// 구조체에서 멤버 접근 위해 '.'찍어서 표현 
//	s1.grade = 2.7;						// 2.7을 s1.grade에 저장
//	printf("학번 : %d\n", s1.num);		// num멤버 출력
//	printf("학점 : %.1lf\n", s1.grade);	// grade 멤버 출력
//
//	return 0;
//}