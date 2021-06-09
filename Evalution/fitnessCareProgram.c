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
	int num;	// ȸ����ȣ
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
	int i = 0, j;
	int count = 0;		// ��ü ȸ����

	for (i = 0; i < 100; i++)
	{
		ary[i] = (Fitness*)malloc(sizeof(Fitness));		//ary[i]�� Fitness�� ������ �迭 �����Ҵ�

		printf("> ȸ�� ��ȣ : ");
		scanf("%d", &ary[i]->num);

		if (ary[i]->num < 0)							//ȸ�� ��ȣ(ary[i]�� �����ϴ� num)�� ������ �� for�� Ż��
			break;

		printf("> �̸� �Է� : ");
		scanf(" %s", ary[i]->name);
		printf("> ü�� �Է� : ");
		scanf(" %lf", &ary[i]->weight);
		count++;	// ȸ���� �߰��ɶ����� ��üȸ���� ����
	}

	total_number(count);
	printf("# ��� ü�� : %lf\n", average_weight(&ary, count));
	printf("# ü���� ���� ���ſ� ȸ����? \n");
	print_info(&ary, max_weight(&ary, count));			//����Լ��� index�� �����ص� �ְ� ü�� �Լ��� index�� �־��ش�.

	
	return 0;
}

/*
	�� �ǵ�� 
	<�µ�>
	1. ��ü�� ���� �ּ� �ʿ� -> �ڵ� ���� ���� 
		=> ������ �����ϸ鼭 ���� �ĺ����� (C#200��, ȥ��C ���� 8������ �ĺ���)
	2. �ڵ� ������ �����Ÿ� -> ������ ġ�� ���� �ൿ
		=> ��ü�� ���� �ּ� ���� 
	3. �ܰ躰 �Ƿ� ��� �ʿ� -> ó������ ���� �׸�
		=> �Ѱ� ��,��� ���� �غ���, �� ���� �ΰ�, �� ���� count���� ��� �ϱ� 
	<�ڵ�>
	1. ���� �Ҵ� 
		- �޸� �Ҵ� �޾� ������ ��¥��¥ ���ǽ��� ���о���. (if������ for�� ���մ�. ���� �Է½� ���������� ����) => �� ��ü�� �������
		- ������ ���� �ΰ� ������ ���о��ٴ� ���̴�.
	2. �Է� 
		- �ּҸ� �Է� �������� �ߴ�. 
	3. ���
		- ��������� ����ؾ��� �Լ� ȣ���� �ƴ�, ���� ���̴� �Լ��� ���� �о���. 
*/


/*�� ȸ�� �� �Լ�*/
void total_number(int count)
{
	printf("# �� ȸ�� �� : %d\n", count);
}

/*��� ü�� �Լ�*/
double average_weight(Fitness** pary, int count)
{
	/*
	1) Fitness����ü���� weight�� �����´�.
	2) pary�� ����Ű�� ary�� Fitness�� �ּҰ�
	3) ���� ��� weight�� 5�� (56,76,84,25,34kg)�̶�� weight �� �� / count 5 �� �� ���̴�.
	*/
	double sum = 0, avg;

	for (int i = 0; i < count; i++)	//��� �� ���� �ݺ��ϸ鼭 ������ �հ踦 ���Ұž�.
	{

		/*
		�� ������ ������ ������ �� ���� ���Ѵ����� �ٽ� �����ؼ� ����Ұž�.
		���� ���� ������ ��� += �Ұǵ�, Fitness�� weight�� �ҷ��;���.
		�׷��� �츮�� �����ͷ� ����ü ��� ���� �ϱ� ������ -> ������ ���!
		*/
		sum += pary[i]->weight;		//pary�� ����Ű�� weight�� i��ŭ ���ؼ� sum�� ����
	}
	avg = (double)sum / count;	//sum�� ����� �� �����Ը� count�� ������ ��� ü�� ���ϱ�
	return avg;

}

/*�ְ� ü�� �Լ�*/
int max_weight(Fitness** pary, int count)
{
	int i = 0;
	int max_weight = pary[0]->weight;	//�׷��� max�� ó�� ������ �����Ѵ�.
	int max_index = i;

	/*
	�ְ� ü���� ���Ϸ��� �Է¹��� ü�ߵ��� ���ؾ߰���.
	������ ���� ���� ������ �񱳰� �Ǿ�� �ϱ� ������
	�迭�� ���� max���̶� ���ؼ� ����غ���.
	*/
	for (i = 0; i < count; i++)
	{
		/*
		 �׷��� �츮�� ��ȯ�ؾ��� ���� index���̹Ƿ� max_weight�� �ε��� ���� max_index�� �Ǿ���Ѵ�.
		 ���� max_weight�� �ε��� i�� max_index�� �������ش�.
		*/
		if (pary[i]->weight > max_weight)
		{
			max_weight = pary[i]->weight;		//ó�������� ������ max���� ū �����԰� pary�� �ٽ� ����ȴ�.
			max_index = i;
		}
	}
	return max_index;
}

/*����Լ�*/
void print_info(Fitness** pary, int index)
{

	/*ȸ�� ���� ���*/

	printf("> ȸ����ȣ: %d\n", pary[index]->num);
	printf("> �̸�: %s\n", pary[index]->name);
	printf("> ü��: %.1lf\n", pary[index]->weight);
}

/*���� �Ҵ� �޸� ��ȯ �Լ�*/
void free_ary(Fitness** pary, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pary[i]);		//�����Ҵ� ���� �����͸� ��ȯ //���� ��ȯ ����!
	};
}