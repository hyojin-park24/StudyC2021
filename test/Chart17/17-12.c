#include <stdio.h>

//struct student
//{
//	int num;
//	double grade;
//};
//
//typedef struct student Student;

// = 

typedef struct 
{
	int num;
	double grade;
}STUDENT;

void print_data(STUDENT* ps);

int main()
{
	STUDENT s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(STUDENT* ps)
{
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}