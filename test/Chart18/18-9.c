//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	FILE* ifp, * ofp;				// ���� ������ ����
//	char name[20];					// �̸�
//	int kor, eng, math;				// �� ���� ����
//	int total;						// ����
//	double avg;						// ���
//	int res;						// fscanf �Լ��� ��ȯ�� ����
//
//	ifp = fopen("a.txt", "r");      // �Է� ������ �б� �������� ����
//	if (ifp == NULL)                // ���� ���� Ȯ��
//	{
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");      // ��� ������ ���� �������� ����
//	if (ofp == NULL)                // ���� ���� Ȯ��
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);  // ������ �Է�
//		if (res == EOF)             // ������ �����͸� ��� ������ EOF ��ȯ
//		{
//			break;
//		}
//		total = kor + eng + math;   // ���� ���
//		avg = total / 3.0;          // ��� ���
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);   // �̸�, ����, ��� ���
//	}
//
//	fclose(ifp);                    // �Է� ���� �ݱ�
//	fclose(ofp);                    // ��� ���� �ݱ�
//
//	return 0;
//}