//소문자 -> 대문자 출력, 대문자 -> 소문자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//알파벳을 입력하세요 
	// 알파벳 입력을 위해서 변수 초기화 필요 
	char ch, big, small;
	
	printf("알파벳 하나를 입력하세요 : ");
	scanf("%c", &ch);
	
	if ((ch >= 65) && (ch <= 90)) // 대문자 받았을 때
	{
		small = ch + 32;
		printf("%c", small);
	}
	else if ((ch >= 97) && (ch <= 122)) // 소문자 받았을 때
	{
		big = ch - 32;
		printf("%c", big);
	}
	else // 알파벳 입력 안했을 때
	{
		printf("알파벳을 입력해 주세요.");
	}
	// 소문자 : 아스키 코드가 65~90

	// 대문자 : 아스키 코드가 97~122 

	// 변환하기 위해서 비교 함수 필요 
	// 무엇으로 비교할 것인가? 아스키 코드로 비교할게.
	//소문자 입력 -> 대문자 변환 

	// 대문자 입력 -> 소문자 변환 

	return 0;
}