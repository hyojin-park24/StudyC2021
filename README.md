# C언어 학습하기   

## 01 프로그램 만들기 (21년 4월 27일)   
> 언어   
> > 절차 지향 ⇒ 함수 [C언어 : 프로젝트]    
> > 객체 지향 ⇒ class [대규모]   
   
### 01-1 프로그램과 C언어   

* 프로그래밍 언어 : 정확한 표현의 규칙을 정의해 놓는 것    
* C 언어    
  * 유닉스(운영체제의 일종)시스템에 사용하기 위해 만든 언어   
  * 장점    
    1. 시스템 프로그래밍이 가능함(하드웨어를 제어하는 시스템 프로그래밍 가능)   
    2. 이식성을 갖춘 프로글매을 만들 수 있음(다른 컴퓨터에서도 사용 가능)   
    3. 함수를 사용하여 개별 프로그래밍 가능 (유지보수에 도움이 됨)    

### 01-2 컴파일과 컴파일러   
* 컴파일    
  : 소스 코드를 **컴파일러**를 통해 컴퓨터가 이해하는 기계어로 만드는 과정    
  Ex) 컴파일러 : Visual Studio   
  
* 컴파일 과정   
> 소스파일 ⇒ (전처리 #include) ⇒ 전처리된 소스 파일 ⇒ (컴파일) ⇒ 개체 파일 ⇒ (링크) ⇒ 실행 파일    

---

## 02 상수와 데이터 출력   

### 02-1 C프로그램의 구조와 데이터 출력 방법   
> 출력 함수의 사용법   

1. 프로그램과 main 함수 구조    
   : C언어 프로그램의 구조    
   * 세미콜론(;)으로 문장 끝 표시   
   * 한 줄에 한 문장씩 작성   
   * 일정한 간격으로 들여쓰기   
```java   
#include <stdio.h> //HeadType
int main() //main함수 - 모든프로그래밍에 메인함수 오롯이 한개 필수(메서드)
{
	//함수가 실행되려고 하면, 메인 함수가 호출이 되어야 함 
	// 함수가 실행되는 이유는 운영체제가 메인 함수를 호출 시켜줬기 때문 
	// 운영체제가 필요한 메모리를 할당시켜줌 

	//return - 운영체제로 되돌려 준다 : 프로그램 정상적으로 종료 = return 0;
	return 0;
}    
```   

2. 출력함수 (printf)     

```java   
#include<stdio.h>
int main()
{
	printf("Be Happy!");
	return 0;
}    
```   

3. 제어 문자 출력   
   * /n (개행, new line) : 다음 줄로 이동   
   * /b (backspace)      : 한 칸 왼쪽으로 이동   
   * /r (carriage return): 맨 앞으로 이동   
   * /a (알럿 경보, alert): 벨소리   

```java   
#include <stdio.h>

int main()
{
	printf("BeHappy!");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Good\t chance\n");
	printf("Cow\rW\a\n");

	return 0;
}   
```   

4. 정수와 실수 출력   
   * printf : 기본적인 풀자열 출력 함수   
   * 숫자를 출력시, 변환하는 과정이 필요 ⇒ 변환 문자   
   * 변환 문자 : %d(정수), %lf(실수), %s(문자열), %c(문자)    

```java   
// 정수와 실수 출력 
// 정수 = %d, 실수 = %lf(기본 소수점 이하 6자리)
// %.1lf = 소수점 이하 1자리 (둘째 자리에서 반올림)
// %.10lf = 소수점 이하 10자리 
#include <stdio.h>

int main()
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}   
```   

### 02-2 상수와 데이터 표현   

1. 정수 상수 표현법   
   * 기본적인 아라비아 숫자 0~9, +, - 기호 사용 
   * 10진수, 8진수, 16진수로 표현   

2. 상수 종류   
   * 정수 : 0~9, +, -    
   	* 10, -5, +20, 0   
   * 실수 : 0~9, +, -, 소수점   
   	* 3.4, -1.7, .5, 10.0   
   * 문자 : 작은따옴표   
   	* 'A', 'b', '0', '*'   
   * 문자열 : 큰 따옴표   
   	* "A", "banana"   

```java   
#include <stdio.h>

int main()
{
	printf("%s은 %s입니다.\n","나의이름", "박효진");
	printf("나의 키는 %.1lf kg입니다.\n", 165.2);
	printf("나의 몸무게는 %1.lf cm입니다.\n", 57.4);

	return 0;
}   
```   

## 03 변수와 데이터 입력   

### 03-1 변수   
1. 변수란?    
   : 저장할 수 있는 공간!   
   
2. 변수 선언 방법   
```   
int a;   
자료형 / 변수 명    
```   

* 대입 연산자    
  : 오른 쪽 값을 왼쪽에 저장(할당)   
  ```   
  a        =      10;     
  LValue      RValue   
  ```  
	* 컴파일러에 따라 변수의 선언 위치가 제한   
	* 변수의 자료 형이 같으면 동시에 둘 이상의 변수 선언 가능   
	  ```   
	  int b,c  //6행. 2개의 int형 변수 b,c를 동시에 선언    
	  ```   
	  
  ```java   
#include <stdio.h>

int main()
{
	int a; //int형 변수 a선언
	int b, c; //2개의 int 형 변수 b,c를 동시 선언
	double da; // double형 변수 da 선언
	char ch; // char형 변수  ch 선언

	a = 10; // int 형 변수 a에 정수 10 대입 
	b = a; // int형 변수 b에 변수 a의 값 대입 
	c = a + 20;
	da = 3.5;
	ch = 'A'; 

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	printf("char 크기 : %d\n", sizeof(char));
	printf("int 크기 : %d\n", sizeof(int));
	printf("double 크기 : %d\n", sizeof(double));
	printf("short 크기 : %d\n", sizeof(short));
	printf("long 크기 : %d\n", sizeof(long));

	return 0;
}
