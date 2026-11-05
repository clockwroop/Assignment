#include <stdio.h>

// 함수 선언: 계산할 두 정수 a, b와 결과를 저장할 변수의 주소 포인터를 받는다.
void divide_result(int a, int b, int *q, int *r);

int main(void)
{
    int a, b;
    int quotient = 0;  // 몫을 저장할 변수
    int remainder = 0; // 나머지를 저장할 변수

    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);

    // 0으로 나누는 연산은 불가능하므로 사전에 분기 검사를 수행한다.
    if (b == 0)
    {
        printf("0으로 나눌 수 없습니다.\n");
    }
    else
    {
        // quotient와 remainder의 메모리 주소를 넘겨 결과를 저장받는다.
        divide_result(a, b, &quotient, &remainder);

        // 함수 실행 후 main 변수에 저장된 계산 결과를 출력한다.
        printf("몫: %d\n", quotient);
        printf("나머지: %d\n", remainder);
    }

    return 0;
}

// 반환값(return) 없이 포인터를 통해 main의 두 변수에 직접 계산 결과를 대입하는 함수
void divide_result(int a, int b, int *q, int *r)
{
    *q = a / b; // q가 가리키는 변수(quotient)에 몫을 저장
    *r = a % b; // r이 가리키는 변수(remainder)에 나머지를 저장
}