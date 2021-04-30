//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; //포인터가 가리키는 곳의 데이터를 상수화(변하지 않는다)
//	//pa가 가리키고 있는 데이터 값 건들이지 마라; => const함수 역할 
//
//	int* const pb = &b; // 포인터 자체가 상수화 = 다른 주소값을 넣을 수 없음
//
//	// 따라서 const위치에 따라 사용하는 용도가 달라짐 (상수될 값이 달라짐)
//
//
//	printf("변수 a값 : %d\n", *pa);
//	pa = &b;
//
//	printf("변수 b 값 : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	
//	//*pa = 20; const함수 때문에
//	printf("변수 a값 : %d\n", *pa);
//
//	
//
//	return 0;
//}