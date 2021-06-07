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

	return 0;
}

void total_number(int count)
{
	for (int i = 0; i < count; i++)
	{
		count++;
	}
}

