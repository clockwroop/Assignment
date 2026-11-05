#include <stdio.h>

// 함수 선언: 배열의 시작 주소를 담을 포인터와 배열 길이를 매개변수로 선언
void add_bonus(int *p, int length);

int main(void)
{
    int i, arr[5]; // 크기가 5인 정수형 배열 선언

    printf("정수 5개 입력: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); // 5개의 정수 입력받기
    }

    printf("변경 전: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // 보너스 추가 전 배열 원소 출력
    }
    printf("\n");

    // 배열 이름 arr은 첫 번째 원소의 시작 주소를 의미하므로 포인터로 전달된다.
    add_bonus(arr, 5);

    printf("변경 후: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // 5씩 더해진 원본 배열 결과 출력
    }
    printf("\n");

    return 0;
}

// 포인터 연산과 역참조를 활용하여 원본 배열의 각 원소에 5를 더하는 함수
void add_bonus(int *p, int length)
{
    int i;

    // 문제 작성 조건: 배열 첨자 p[i] 대신 *(p + i) 연산 방식을 사용한다.
    for (i = 0; i < length; i++)
    {
        // (p + i)는 시작 주소로부터 i번째 떨어진 원소의 주소를 가리키며,
        // *(p + i)로 해당 메모리에 접근하여 5를 더한다.
        *(p + i) += 5;
    }
}