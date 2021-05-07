//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;								//할당한 저장 공간을 연결할 포인터
//	int size = 5;							// 한 번에 할당할 저장 공간의 크기, INT형 변수 5개씩
//	int count = 0;							// 현재 입력된 양수 개수
//	int num;								// 양수를 입력할 변수
//	int i;									// 반복 제어 변수
//
//	pi = (int*)calloc(size, sizeof(int));	//먼저 5개의 저장 공간 할당
//
//	while (1)
//	{
//		printf("양수만 입력 하세요 => ");	
//		scanf("%d", &num);					//데이터 입력
//		if (num <= 0) break;				// 0또는 음수이면 종료
//		if (count == size)					// 저장 공간을 모두 사용하면
//		{
//			size += 5;						// 크기를 늘려서 재할당
//			// pi_back = pi; 이렇게 사용! 
//			pi = (int*)realloc(pi, size * sizeof(int));
//			// 만약에 메모리 공간에 할당 못받으면 NULL이 할당 받게되고
//			// 기존에 할당받은 포인터 pi 영역에서 뒤에 5개를 늘려서 할당받고
//			// pi에 null이 들어가면서 기존에 할당되었던 메모리 주소를 잃어버림
//			// 즉 다른 주소에서 5개를 realloc을 받아오는데 기존에 있던 것은 다른 주소에복사 받으면 되는데
//			// 다른 주소에 공간이 없을 때에는 pi에 NULL을 할당해버리게 되면 
//			// 기존 할당받는 포인터 주소에 NULL값이 들어가게 되고 
//			// 기존 값이 사라지게 됨으로 문제가 생김 
//			// 그래서 NULL포인터가 들어오게 될 문제를 대책을 둬야함
//			// 그래서 임시포인터에 기존 포인터 값을 저장 해 둔 다음에 
//			// realloc을 활용해 저장 공간을 늘려 재 할당을 해야함 
//			// realloc을 사용할 때에는 항상!!
//			// 기존 데이터 값을 임시 저장 주소에 저장해둬야함! 
//			// Ex) temp or pi_back; 
//			// if (pi == NULL){
//			//					pi = pi_back; 
//			//	}
//		}
//		pi[count++] = num;
//	}
//
//	for ( i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);				// 입력한 데이터 출력
//	}
//	free(pi);								// 동적 할당 저장 공간 반납
//
//	return 0;
//}