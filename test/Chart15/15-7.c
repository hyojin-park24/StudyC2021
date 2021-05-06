//#include <stdio.h>
//
//int sum(int, int);					// 함수 선언
//
//int main()
//{
//	int (*fp)(int, int);			// 함수 포인터 선언
//	//7행 주의깊게 봐야함 
//	// 동일한 타입의 함수들이 많을 때 함수 포인터를 활용!
//	int res;						// 반환값을 저장할 변수
//
//	fp = sum;						// 함수명을 함수 포인터에 저장
//	res = fp(10, 20);				// 함수 포인터로 함수 출력
//	printf("result : %d\n", res);	// 반환값 출력
//
//	return 0;
//}
//
//int sum(int a, int b)				// 함수 정의
//{
//	return (a + b);
//}