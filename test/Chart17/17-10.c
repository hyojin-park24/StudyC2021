//#include <stdio.h>
//
//union student					//����ü ����
//{
//	int num;					// �й��� ������ ���
//	double grade;				// ������ ������ ���
//};
//
//struct student1
//{
//	int num;
//	double grade;
//};
//
//int main()
//{
//	union student s1 = { 3.14 };	// ����ü ������ ����� �ʱ�ȭ
//	struct student1 s2;
//
//	printf("�й� : %d", s1.num); // �й� ��� ���
//	s1.grade = 4.4;			// ���� ����� �� ����
//
//	printf("���� : %.1lf\n", s1.grade);
//
//	s1.num = 315;					
//	// ����ü�� ��������� �ϳ��� �����ϱ� ������ num����ϱ� ����
//	// �ٽ� ���� �Է��� ����� 
//	printf("�й� : %d\n", s1.num);	// �й� �ٽ� ���
//
//	printf("%d\n", sizeof(s2));
//	
//
//	return 0;
//}