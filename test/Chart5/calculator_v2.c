/*
   ȫ���̿����� �˷��� V2 
   ���� ������ ������ �� �� �ִ� 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, res;                              // �� �Է°� ������� �޾� �� ������ �����Ѵ�.  a,b,res�� ���ڴϱ� int�� ������ �ҷ����� ���̴�.                             
    char cal;                                   // char�� cal�� �����Ѵ�. �����ȣ�� �����̱� �����̴�.

    printf("ù��° ���� �Է��ϼ��� : ");        // ȭ�� ��¿� ��� ���ε�, �����͸� ���� ������ ������ �Ǽ��� ����ϴ� ��ȯ ������ �ʿ� �ϱ� ������ scanf�Լ� ����Ѵ�. ��� ������ �տ� &�ٿ�����!!!
    scanf("%d", &a);

    printf("�ι�° ���� �Է��ϼ��� : ");
    scanf("%d", &b);
    //getchar();

    printf("���ϴ� ������ �Է��ϼ��� : ");
    scanf(" %c", &cal);

    switch (cal)                                // ���� ��Ģ������ ����ϰ� �ͱ� ������ switch���� ����Ѵ�. 
    {
    case '+':                                   // '+'�� ����
        res = a + b;                            // ������ִ� �κ� 
        printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, res);  // ȭ�� ���
        break;                                                  
    case '-':
        res = a - b;
        printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, res);
        break;
    case '*':
        res = a * b;
        printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, res);
        break;
    case '/':
        if (b == 0)
        {
            printf("0���� ���� �� �����ϴ�.\n");
            main();
        }
        else
        {
            res = a / b;
            printf("%d %c %d��(��) %d�Դϴ�.", a, cal, b, res);
            break;
        }
    default:
        break;
    }

    return 0;
}