#include <stdio.h>

// 함수 선언: 배열의 시작 주소와 배열의 길이를 매개변수로 받는다.
void double_values(int a[], int length);

int main(void)
{
    int i, x[5]; // 크기가 5인 정수형 배열 선언

    printf("입력 배열: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]); // 5개의 정수 입력받기
    }

    printf("변경 전: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]); // 함수 호출 전 원본 값 출력
    }
    printf("\n");

    // 함수 호출: 배열 이름 x는 첫 번째 원소의 주소를 전달한다.
    double_values(x, 5);

    printf("변경 후: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]); // 원본 배열이 직접 변경된 결과 출력
    }
    printf("\n");

    return 0;
}

// 매개변수로 전달된 원본 배열의 모든 원소 값을 2배로 수정하는 함수
void double_values(int a[], int length)
{
    int j;

    for (j = 0; j < length; j++)
    {
        a[j] *= 2; // 원본 배열 a의 j번째 값을 직접 2배로 만든다.
    }
}