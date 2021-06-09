/*�� �ҹ��� ���� ���� ���ĺ��� �Է��ϸ� �� �ҹ��ڸ� �Ǻ��Ͽ� �з��ϰ�,
  ���� ������ �����Ͽ� ����ϴ� ���α׷�
  1. �Է�
	- main�Լ����� ���ĺ� �Է¹޴� �Լ� �ʿ� 
  2. �з�
	- ���� ���� �Լ��� �� �ҹ��� �з� 
  3. ��� 
	- �ҹ��� / �빮�� ������� ��� 
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void insertionlower(char lower_ary[], int n);
void insertionupper(char upper_ary[], int n);

int main() {
	/*1. �Է�
		1)�Է� ���� �迭 �����ϱ�. ��ũ��� 10
		2)�Է� ���� �Լ� �ۼ� (printf, scanf)
	*/
	char input_ary[10]; 

	printf("��,�ҹ��� ���о��� ���ĺ��� �Է��ϼ��� : ");
	scanf("%s", input_ary);			// ��� �Է� ���� ��� �����ϱ� ������ �迭 �̸����� �Է� �ޱ�
	printf("���ĺ� : %s\n\n", input_ary);


	/*2. �з�*/

	// �빮�� ����
	char lower_ary[10];	// �ҹ��� ���� �迭
	char upper_ary[10];	// �빮�� ���� �迭
	int  l = 0, u = 0;  // �ҹ���, �빮�� �迭�� �����ϱ� ���� �ε��� ��
	int i = 0;
	
	for ( i = 0; i < 10; i++)
	{
		if (input_ary[i] >= 'A' && input_ary[i] <= 'Z')	//�Է¹��� �迭���� �빮���϶�,
		{
			upper_ary[l] = input_ary[i];				//�빮�� ���� �빮�� �迭�� ����
			l++;
		}
		else if (input_ary[i] >= 'a' && input_ary[i] <= 'z')	//�Է¹��� �迭���� �ҹ����϶�,
		{
			lower_ary[u] = input_ary[i];				//�ҹ��� ���� �ҹ��� �迭�� ����
			u++;
		}
	}

	printf("\n===�ҹ���===\n");
	for ( i = 0; i < l; i++)
	{
		printf("%c", lower_ary[i]);
	}
	insertionlower(lower_ary, l);			//�ҹ��� ���� ���� ȣ��

	printf("\n===�빮��===\n");
	for ( i = 0; i < u; i++)
	{
		printf("%c", upper_ary[i]);
	}
	insertionupper(upper_ary, u);			//�빮�� ���� ���� ȣ��
	return 0;
}


// ���� ���� �Լ� => �ҹ��ڸ�
void insertionlower(char lower_ary[], int l)
{
	int i, j, k, key;

	for (i = 1; i < l; i++) {						//�ι�° �� ���� ��
		key = lower_ary[i];							//key�� �ҹ��� �迭 �� ����
		j = i;
		while ((j > 0) && (lower_ary[j - 1] > key))	//�� ���� �հ����� Ŭ ����
		{
			lower_ary[j] = lower_ary[j - 1];		//�ҹ��� �迭�� �� ����
			j = j - 1;								//�� �� j�� ����
		}	
		lower_ary[j] = key;							//����� key���� �ٽ� �ҹ��� �迭�� ����

	}
	printf("==>");
	for (k = 0; k < l; k++)
	{
		printf("%3c	", lower_ary[k]);
	}
	printf("\n\n============= �ҹ��� ���� �Ϸ� =============\n");
	printf("\n\n");

}


// ���� ���� �Լ� => �빮�ڸ�
void insertionupper(char upper_ary[], int u)
{
	int i, j, k, key;

	for (i = 1; i < u; i++) {						//�ι�° ����� �� 
		key = upper_ary[i];							//key�� �빮�� �迭 �� ����
		j = i;
		while ((j > 0) && (upper_ary[j - 1] > key))	//�ι�° ���� ù��° ������ Ŭ ����
		{
			upper_ary[j] = upper_ary[j - 1];		//�빮�� �迭�� �� ����
			j = j - 1;								//�ι�° �� j�� ����
		}
		upper_ary[j] = key;							//����� key���� �ٽ� �빮�� �迭�� ����

	}
	printf("==>");
	for (k = 0; k < u; k++)
	{
		printf("%3c	", upper_ary[k]);
	}
	printf("\n\n============= �빮�� ���� �Ϸ� =============\n");
}


