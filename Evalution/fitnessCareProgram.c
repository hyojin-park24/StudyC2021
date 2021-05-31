/*휘트니스 회원관리 프로그램
입력
신규회원 등록은 회원 번호와 이름, 체중을 입력하고, heep에 저장
회원 번호로 음수를 입력하면 입력이 종료
출력
총 회원 수, 평균 체중, 최고 체중을 갖는 회원의 정보 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	double weight;
}Fitness;
Fitness* ary[100];
void total_number(int count);
double average_weight(Fitness** pary, int count);
int max_weight(Fitness** pary, int count);
void print_info(Fitness** pary, int index);
void free_ary(Fitness** pary, int count);
int main()
{

	return 0;
}