#include <stdio.h>

// 함수 프로토타입 선언
void add_bonus(int *p, int length);

int main(void)
{
    int i, arr[5]; // 크기 5인 정수형 배열 생성

    printf("정수 5개 입력: "); // 입력 프롬프트 출력
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); // 정수 5개 차례대로 입력
    }

    printf("변경 전: "); // 변경 전 프롬프트 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // 함수 호출 전 원본 원소 출력
    }
    printf("\n");

    // add_bonus 함수 호출 (배열 시작 주소 arr 전달)
    add_bonus(arr, 5);

    printf("변경 후: "); // 변경 후 프롬프트 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // 보너스 추가 후 원본 배열 출력
    }
    printf("\n");

    return 0;
}

// 포인터 연산과 역참조를 통해 원본 배열 원소에 5를 더하는 함수 정의
void add_bonus(int *p, int length)
{
    int i;

    // 포인터 덧셈 및 역참조 연산자 *(p + i)를 사용한 원본 원소 값 수정
    for (i = 0; i < length; i++)
    {
        *(p + i) += 5; // i번째 위치 원소에 5 추가
    }
}