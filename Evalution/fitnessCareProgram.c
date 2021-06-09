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
	int num;	// 회원번호
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
	int i = 0, j;
	int count = 0;		// 전체 회원수

	for (i = 0; i < 100; i++)
	{
		ary[i] = (Fitness*)malloc(sizeof(Fitness));		//ary[i]는 Fitness의 포인터 배열 동적할당

		printf("> 회원 번호 : ");
		scanf("%d", &ary[i]->num);

		if (ary[i]->num < 0)							//회원 번호(ary[i]가 저장하는 num)가 음수일 때 for문 탈출
			break;

		printf("> 이름 입력 : ");
		scanf(" %s", ary[i]->name);
		printf("> 체중 입력 : ");
		scanf(" %lf", &ary[i]->weight);
		count++;	// 회원이 추가될때마다 전체회원수 증가
	}

	total_number(count);
	printf("# 평균 체중 : %lf\n", average_weight(&ary, count));
	printf("# 체중이 가장 무거운 회원은? \n");
	print_info(&ary, max_weight(&ary, count));			//출력함수에 index를 저장해둔 최고 체중 함수를 index에 넣어준다.

	
	return 0;
}

/*
	총 피드백 
	<태도>
	1. 전체적 구상 주석 필요 -> 코드 논리성 부족 
		=> 예제를 생각하면서 많이 쳐봐야함 (C#200제, 혼공C 예제 8월까지 쳐보기)
	2. 코드 생성시 덤벙거림 -> 무작정 치고 보는 행동
		=> 전체적 구상 주석 쓰기 
	3. 단계별 실력 향상 필요 -> 처음부터 산을 그림
		=> 한개 입,출력 먼저 해보고, 그 다음 두개, 그 다음 count까지 향상 하기 
	<코드>
	1. 동적 할당 
		- 메모리 할당 받아 놓고서는 다짜고짜 조건식을 내밀었다. (if문으로 for문 감쌌다. 음수 입력시 빠져나가기 위해) => 이 자체가 덤벙댄것
		- 쓰레기 값을 두고 조건을 내밀었다는 것이다.
	2. 입력 
		- 주소만 입력 받으려고 했다. 
	3. 출력
		- 결론적으로 출력해야할 함수 호출이 아닌, 눈에 보이는 함수를 들이 밀었다. 
*/


/*총 회원 수 함수*/
void total_number(int count)
{
	printf("# 총 회원 수 : %d\n", count);
}

/*평균 체중 함수*/
double average_weight(Fitness** pary, int count)
{
	/*
	1) Fitness구조체에서 weight만 가져온다.
	2) pary가 가리키는 ary의 Fitness가 주소값
	3) 예를 들어 weight가 5명 (56,76,84,25,34kg)이라면 weight 총 합 / count 5 가 될 것이다.
	*/
	double sum = 0, avg;

	for (int i = 0; i < count; i++)	//사람 수 까지 반복하면서 몸무게 합계를 구할거야.
	{

		/*
		총 몸무게 변수에 몸무게 총 합을 더한다음에 다시 저장해서 사용할거야.
		복합 대입 연산자 사용 += 할건데, Fitness의 weight만 불러와야해.
		그런데 우리는 포인터로 구조체 멤버 접근 하기 때문에 -> 연산자 사용!
		*/
		sum += pary[i]->weight;		//pary가 가리키는 weight를 i만큼 더해서 sum에 저장
	}
	avg = (double)sum / count;	//sum에 저장된 총 몸무게를 count로 나눠서 평균 체중 구하기
	return avg;

}

/*최고 체중 함수*/
int max_weight(Fitness** pary, int count)
{
	int i = 0;
	int max_weight = pary[0]->weight;	//그래서 max를 처음 값으로 설정한다.
	int max_index = i;

	/*
	최고 체중을 구하려면 입력받은 체중들을 비교해야겠지.
	하지만 값이 들어올 때마다 비교가 되어야 하기 때문에
	배열을 통해 max값이랑 비교해서 출력해본다.
	*/
	for (i = 0; i < count; i++)
	{
		/*
		 그런데 우리가 반환해야할 값은 index값이므로 max_weight의 인덱스 값이 max_index가 되어야한다.
		 따라서 max_weight의 인덱스 i를 max_index에 대입해준다.
		*/
		if (pary[i]->weight > max_weight)
		{
			max_weight = pary[i]->weight;		//처음값으로 설정된 max보다 큰 몸무게가 pary에 다시 저장된다.
			max_index = i;
		}
	}
	return max_index;
}

/*출력함수*/
void print_info(Fitness** pary, int index)
{

	/*회원 정보 출력*/

	printf("> 회원번호: %d\n", pary[index]->num);
	printf("> 이름: %s\n", pary[index]->name);
	printf("> 체중: %.1lf\n", pary[index]->weight);
}

/*동적 할당 메모리 반환 함수*/
void free_ary(Fitness** pary, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pary[i]);		//동적할당 받은 포인터를 반환 //구조 반환 안함!
	};
}