///*
//	�α��� ���α׷�
//	1. id�� password�� �����ϰ� �����̸��� password.txt�� �����Ѵ�.
//	2. ����ü Login ������ id, password ����� ���� ������ ��Ű��
//	3. Ű����� �ԷµǴ� id�� password�� ���Ͽ� "�α��� �Ǿ����ϴ�"
//		�Ǵ� "���̵� ã�� �� �����ϴ�."��� �޼��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//		�ۼ��� : 2021�� 5�� 11�� 
//		�ۼ��� : ��ȿ��
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. password.txt ���� ���� / id, password ����
//// 2. ����ü�� Login ������ id, password ��� ���� ����
//
//struct Login
//{
//	char id[50];
//	char password[80];		// id����
//	
//};
//
//int main()
//{
//	struct Login log;		//����ü ���� ���� 
//
//	
//	FILE* fp;
//	char id[20];										// ����ڰ� Ű����� �Է��ϴ� ��
//	char psw[20];										// ���� ���� 
//	int cpy;
//	
//
//	fp = fopen("password.txt", "r");					// ������ �б� �������� ���
//
//
//	if (fp == NULL)
//	{
//		printf("������ ������ ���߽��ϴ�.\n");
//		return 1;
//	}
//
//
//	while (1)
//	{
//		
//		cpy = fscanf(fp, "%s %s", log.id, log.password);
//		// txt���Ͽ� �ִ� �����͸� ����ü ����� �޾ƿ��� ���� fscanf�Լ��� ����Ͽ�
//		// ����ü ���� . �� ����ؼ� ����ü�� �޾ƿ���
//		if (cpy == EOF)
//		{
//			break;
//		}
//	}
//	
//	while (1)
//	{
//
//		printf("ID, Password �� �Է��ϼ��� : ");
//		scanf("%s %s", id, psw);
//
//		if (strcmp(id, log.id) == 0)				// ����ü ���� ���� ����� �Է� ���� ��ġ�� ��
//		{
//			if (strcmp(psw, log.password) == 0)
//			{
//				printf("�α����� �Ǿ����ϴ�.");
//				break;
//			}
//			else
//			{
//				printf("��й�ȣ�� Ȯ�����ּ���.");
//			}
//		}
//		else
//		{
//			printf("����ڸ� ã�� �� �����ϴ�.");
//		}
//		printf("\n");
//	}
//
//	fclose(fp);
//
//
//	return 0;
//}