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

	/*
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
	*/

	return 0;
}

/*�� ȸ�� �� �Լ�*/
void total_number(int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("�� ȸ�� �� : \n");
		count++;
	}
}

/*��� ü�� �Լ�*/
double average_weight(Fitness** pary, int count)
{
	//1) Fitness����ü���� weight�� �����´�
	//2) pary�� ����Ű�� ary�� Fitness�� �ּҰ� 
	//3) ���� ��� weight�� 5�� (56,76,84,25,34kg)�̶�� weight �� �� / count 5 �� �� ���̴�. 

	for (int i = 1; i < count; i++)	//��� �� ���� �ݺ��ϸ鼭 ������ �հ踦 ���Ұž�
	{
		double sum =0 , avg;
		//�� ������ ������ ������ �� ���� ���Ѵ����� �ٽ� �����ؼ� ����Ұž�. 
		//���� ���� ������ ��� += �Ұǵ�, Fitness�� weight�� �ҷ��;���.
		//�׷��� �츮�� �����ͷ� ����ü ��� ���� �ϱ� ������ -> ������ ���!
		sum += pary[i]->weight;
		avg = (double)sum / count;
		
		printf("��� ü�� : \n");
	}


}

/*�ְ� ü�� �Լ�*/
int max_weight(Fitness** pary, int count)
{

}

/*����Լ�*/
void print_info(Fitness** pary, int index)
{

}

/*���� �Ҵ� �޸� ��ȯ �Լ�*/
void free_ary(Fitness** pary, int count)
{

}