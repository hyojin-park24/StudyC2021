/*��Ʈ�Ͻ� ȸ������ ���α׷�
�Է�
�ű�ȸ�� ����� ȸ�� ��ȣ�� �̸�, ü���� �Է��ϰ�, heep�� ����
ȸ�� ��ȣ�� ������ �Է��ϸ� �Է��� ����
���
�� ȸ�� ��, ��� ü��, �ְ� ü���� ���� ȸ���� ���� ���
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
void total_number(int count);						//��ȸ�� �� �Լ�
double average_weight(Fitness** pary, int count);	//��� ü�� �Լ�
int max_weight(Fitness** pary, int count);			//�ְ� ü�� �Լ�
void print_info(Fitness** pary, int index);			//��� �Լ�
void free_ary(Fitness** pary, int count);			//�����Ҵ� ��ȯ �Լ�
int main()
{
	int i;
	int num = 0;		//ȸ����ȣ
	char name[20];
	
	ary[i] = malloc(sizeof(Fitness) * num);
	if (ary == NULL) { printf("�޸� ����"); exit(1); }
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s %f", &ary[i].num, name, &ary[i].weight);
		(ary +i)->name = (char*)malloc(strlen(name) + 1);		//
		if ((ary + i)->name == NULL) { printf("�޸� ����"); exit(1); }
		strcpy((ary + 1)->name, name);
	}
	for (int i = 0; i < num; i++)
	{
		printf("ȸ�� ��ȣ : %d", (people + i)->num);
		printf("�̸� �Է� : %s", (people + i)->name);
		printf("ü�� �Է� : %f", (people + i)->weight);
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

