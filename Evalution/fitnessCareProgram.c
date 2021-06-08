/*휘트니스 회원관리 프로그램
입력
신규회원 등록은 회원 번호와 이름, 체중을 입력하고, heep에 저장
회원 번호로 음수를 입력하면 입력이 종료
출력
총 회원 수, 평균 체중, 최고 체중을 갖는 회원의 정보 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	double weight;
}Fitness;
Fitness* ary[100];

void total_number(int count);						//총회원 수 함수
double average_weight(Fitness** pary, int count);	//평균 체중 함수
int max_weight(Fitness** pary, int count);			//최고 체중 함수
void print_info(Fitness** pary, int index);			//출력 함수
void free_ary(Fitness** pary, int count);			//동적할당 반환 함수

int main()
{

	/*
	int i;
	int num = 0;		//회원번호
	char name[20];
	
	ary[i] = malloc(sizeof(Fitness) * num);
	if (ary == NULL) { printf("메모리 부족"); exit(1); }
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s %f", &ary[i].num, name, &ary[i].weight);
		(ary +i)->name = (char*)malloc(strlen(name) + 1);		//
		if ((ary + i)->name == NULL) { printf("메모리 부족"); exit(1); }
		strcpy((ary + 1)->name, name);
	}
	for (int i = 0; i < num; i++)
	{
		printf("회원 번호 : %d", (people + i)->num);
		printf("이름 입력 : %s", (people + i)->name);
		printf("체중 입력 : %f", (people + i)->weight);
	}
	*/

	return 0;
}

/*총 회원 수 함수*/
void total_number(int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("총 회원 수 : \n");
		count++;
	}
}

/*평균 체중 함수*/
double average_weight(Fitness** pary, int count)
{
	//1) Fitness구조체에서 weight만 가져온다
	//2) pary가 가리키는 ary의 Fitness가 주소값 
	//3) 예를 들어 weight가 5명 (56,76,84,25,34kg)이라면 weight 총 합 / count 5 가 될 것이다. 

	for (int i = 1; i < count; i++)	//사람 수 까지 반복하면서 몸무게 합계를 구할거야
	{
		double sum =0 , avg;
		//총 몸무게 변수에 몸무게 총 합을 더한다음에 다시 저장해서 사용할거야. 
		//복합 대입 연산자 사용 += 할건데, Fitness의 weight만 불러와야해.
		//그런데 우리는 포인터로 구조체 멤버 접근 하기 때문에 -> 연산자 사용!
		sum += pary[i]->weight;
		avg = (double)sum / count;
		
		printf("평균 체중 : \n");
	}


}

/*최고 체중 함수*/
int max_weight(Fitness** pary, int count)
{

}

/*출력함수*/
void print_info(Fitness** pary, int index)
{

}

/*동적 할당 메모리 반환 함수*/
void free_ary(Fitness** pary, int count)
{

}