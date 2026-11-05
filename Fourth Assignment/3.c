#include <stdio.h>

// 함수 원형 선언 (배열의 시작 주소와 길이를 인수로 전달받음)
void double_values(int a[], int length);

int main(void)
{
    int i, x[5]; // 원소 5개 정수형 배열 생성

    printf("입력 배열: "); // 입력 안내 문구 출력
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]); // 배열 원소 5개 입력
    }

    printf("변경 전: "); // 변경 전 안내 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]); // 함수 호출 전 원본 배열 출력
    }
    printf("\n");

    // 함수 호출 (배열 이름 x를 전달하여 원본 배열 주소 넘김)
    double_values(x, 5);

    printf("변경 후: "); // 변경 후 안내 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]); // 함수 호출 후 변경된 배열 출력
    }
    printf("\n");

    return 0;
}

// 전달받은 원본 배열의 원소 값을 직접 2배로 수정하는 함수 정의
void double_values(int a[], int length)
{
    int j;

    // 반복문을 통한 각 원소 2배 연산 및 원본 메모리 직접 수정
    for (j = 0; j < length; j++)
    {
        a[j] *= 2; // j번째 원소 값 2배 갱신
    }
}