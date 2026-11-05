#include <stdio.h>

// 함수 원형 선언 (피제수, 제수 및 결과 저장용 주소 전달)
void divide_result(int a, int b, int *q, int *r);

int main(void)
{
    int a, b;
    int quotient = 0;  // 몫 저장용 변수
    int remainder = 0; // 나머지 저장용 변수

    printf("두 정수 입력: "); // 입력 요구 출력문
    scanf("%d %d", &a, &b);   // 두 정수 입력

    // 제수 0 입력에 대한 사전 오류 예외 처리
    if (b == 0)
    {
        printf("0으로 나눌 수 없습니다.\n"); // 오류 안내문 출력
    }
    else
    {
        // 몫과 나머지 계산 함수 호출 (변수 주소 &quotient, &remainder 전달)
        divide_result(a, b, &quotient, &remainder);

        // 함수 호출 후 갱신된 결과 출력
        printf("몫: %d\n", quotient);
        printf("나머지: %d\n", remainder);
    }

    return 0;
}

// 포인터 간접 참조를 통해 main의 두 변수에 연산 결과를 직접 저장하는 함수 정의
void divide_result(int a, int b, int *q, int *r)
{
    *q = a / b; // q가 가리키는 메모리(quotient)에 몫 저장
    *r = a % b; // r이 가리키는 메모리(remainder)에 나머지 저장
}