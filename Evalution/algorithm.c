/*대 소문자 구분 없이 알파벳을 입력하면 대 소문자를 판별하여 분류하고,
  사전 순으로 정렬하여 출력하는 프로그램
  1. 입력
	- main함수에서 알파벳 입력받는 함수 필요 
  2. 분류
	- 삽입 정렬 함수로 대 소문자 분류 
  3. 출력 
	- 소문자 / 대문자 순서대로 출력 
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void insertionlower(char lower_ary[], int n);
void insertionupper(char upper_ary[], int n);

int main() {
	/*1. 입력
		1)입력 받을 배열 선언하기. 방크기는 10
		2)입력 받을 함수 작성 (printf, scanf)
	*/
	char input_ary[10]; 

	printf("대,소문자 구분없이 알파벳을 입력하세요 : ");
	scanf("%s", input_ary);			// 대신 입력 받을 배언에 저장하기 때문에 배열 이름으로 입력 받기
	printf("알파벳 : %s\n\n", input_ary);


	/*2. 분류*/

	// 대문자 구분
	char lower_ary[10];	// 소문자 저장 배열
	char upper_ary[10];	// 대문자 저장 배열
	int  l = 0, u = 0;  // 소문자, 대문자 배열에 삽입하기 위한 인덱스 값
	int i = 0;
	
	for ( i = 0; i < 10; i++)
	{
		if (input_ary[i] >= 'A' && input_ary[i] <= 'Z')	//입력받은 배열값이 대문자일때,
		{
			upper_ary[l] = input_ary[i];				//대문자 값을 대문자 배열에 저장
			l++;
		}
		else if (input_ary[i] >= 'a' && input_ary[i] <= 'z')	//입력받은 배열값이 소문자일때,
		{
			lower_ary[u] = input_ary[i];				//소문자 값을 소문자 배열에 저장
			u++;
		}
	}

	printf("\n===소문자===\n");
	for ( i = 0; i < l; i++)
	{
		printf("%c", lower_ary[i]);
	}
	insertionlower(lower_ary, l);			//소문자 삽일 정렬 호출

	printf("\n===대문자===\n");
	for ( i = 0; i < u; i++)
	{
		printf("%c", upper_ary[i]);
	}
	insertionupper(upper_ary, u);			//대문자 삽입 정렬 호출
	return 0;
}


// 삽입 정렬 함수 => 소문자만
void insertionlower(char lower_ary[], int l)
{
	int i, j, k, key;

	for (i = 1; i < l; i++) {						//두번째 방 부터 비교
		key = lower_ary[i];							//key에 소문자 배열 값 저장
		j = i;
		while ((j > 0) && (lower_ary[j - 1] > key))	//뒷 값이 앞값보다 클 동안
		{
			lower_ary[j] = lower_ary[j - 1];		//소문자 배열에 값 저장
			j = j - 1;								//뒷 값 j에 저장
		}	
		lower_ary[j] = key;							//저장된 key값에 다시 소문자 배열에 저장

	}
	printf("==>");
	for (k = 0; k < l; k++)
	{
		printf("%3c	", lower_ary[k]);
	}
	printf("\n\n============= 소문자 정렬 완료 =============\n");
	printf("\n\n");

}


// 삽입 정렬 함수 => 대문자만
void insertionupper(char upper_ary[], int u)
{
	int i, j, k, key;

	for (i = 1; i < u; i++) {						//두번째 방부터 비교 
		key = upper_ary[i];							//key에 대문자 배열 값 저장
		j = i;
		while ((j > 0) && (upper_ary[j - 1] > key))	//두번째 값이 첫번째 값보다 클 동안
		{
			upper_ary[j] = upper_ary[j - 1];		//대문자 배열에 값 저장
			j = j - 1;								//두번째 값 j에 저장
		}
		upper_ary[j] = key;							//저장된 key값에 다시 대문자 배열에 저장

	}
	printf("==>");
	for (k = 0; k < u; k++)
	{
		printf("%3c	", upper_ary[k]);
	}
	printf("\n\n============= 대문자 정렬 완료 =============\n");
}


