/*��Ʈ�Ͻ� ȸ������ ���α׷�
�Է�
�ű�ȸ�� ����� ȸ�� ��ȣ�� �̸�, ü���� �Է��ϰ�, heep�� ����
ȸ�� ��ȣ�� ������ �Է��ϸ� �Է��� ����
���
�� ȸ�� ��, ��� ü��, �ְ� ü���� ���� ȸ���� ���� ���
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