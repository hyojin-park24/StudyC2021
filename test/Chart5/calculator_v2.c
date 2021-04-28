/*
   홍렬이오빠가 알려준 V2 
   완전 좌절감 들지만 할 수 있다 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, res;                              // 두 입력과 결과값을 받아 올 변수를 선언한다.  a,b,res는 숫자니깐 int형 변수를 불러오는 것이다.                             
    char cal;                                   // char형 cal를 선언한다. 연산기호는 문자이기 때문이다.

    printf("첫번째 수를 입력하세요 : ");        // 화면 출력에 물어볼 것인데, 데이터를 연산 가능한 정수나 실수로 사용하는 변환 과정이 필요 하기 때문에 scanf함수 사용한다. 대신 변수명 앞에 &붙여야함!!!
    scanf("%d", &a);

    printf("두번째 수를 입력하세요 : ");
    scanf("%d", &b);
    //getchar();

    printf("원하는 연산을 입력하세요 : ");
    scanf(" %c", &cal);

    switch (cal)                                // 나는 사칙연산을 출력하고 싶기 때문에 switch문을 사용한다. 
    {
    case '+':                                   // '+'는 문자
        res = a + b;                            // 계산해주는 부분 
        printf("%d %c %d은(는) %d입니다.", a, cal, b, res);  // 화면 출력
        break;                                                  
    case '-':
        res = a - b;
        printf("%d %c %d은(는) %d입니다.", a, cal, b, res);
        break;
    case '*':
        res = a * b;
        printf("%d %c %d은(는) %d입니다.", a, cal, b, res);
        break;
    case '/':
        if (b == 0)
        {
            printf("0으로 나눌 수 없습니다.\n");
            main();
        }
        else
        {
            res = a / b;
            printf("%d %c %d은(는) %d입니다.", a, cal, b, res);
            break;
        }
    default:
        break;
    }

    return 0;
}