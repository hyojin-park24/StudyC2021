///*
//	로그인 프로그램
//	1. id와 password를 저장하고 파일이름은 password.txt로 저장한다.
//	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고
//	3. 키보드로 입력되는 id와 password를 비교하여 "로그인 되었습니다"
//		또는 "아이디를 찾을 수 없습니다."라는 메세지 출력하는 프로그램을 작성하시오.
//
//		작성일 : 2021년 5월 11일 
//		작성자 : 박효진
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. password.txt 파일 저장 / id, password 저장
//// 2. 구조체에 Login 변수에 id, password 멤버 각각 저장
//
//struct Login
//{
//	char id[50];
//	char password[80];		// id변수
//	
//};
//
//int main()
//{
//	struct Login log;		//구조체 변수 선언 
//
//	
//	FILE* fp;
//	char id[20];										// 사용자가 키보드로 입력하는 값
//	char psw[20];										// 위와 동일 
//	int cpy;
//	
//
//	fp = fopen("password.txt", "r");					// 파일을 읽기 전용으로 열어씀
//
//
//	if (fp == NULL)
//	{
//		printf("파일을 만들지 못했습니다.\n");
//		return 1;
//	}
//
//
//	while (1)
//	{
//		
//		cpy = fscanf(fp, "%s %s", log.id, log.password);
//		// txt파일에 있는 데이터를 구조체 멤버로 받아오기 위해 fscanf함수를 사용하여
//		// 구조체 연산 . 을 사용해서 구조체로 받아오기
//		if (cpy == EOF)
//		{
//			break;
//		}
//	}
//	
//	while (1)
//	{
//
//		printf("ID, Password 를 입력하세요 : ");
//		scanf("%s %s", id, psw);
//
//		if (strcmp(id, log.id) == 0)				// 구조체 저장 값과 사용자 입력 값이 일치할 때
//		{
//			if (strcmp(psw, log.password) == 0)
//			{
//				printf("로그인이 되었습니다.");
//				break;
//			}
//			else
//			{
//				printf("비밀번호를 확인해주세요.");
//			}
//		}
//		else
//		{
//			printf("사용자를 찾을 수 없습니다.");
//		}
//		printf("\n");
//	}
//
//	fclose(fp);
//
//
//	return 0;
//}