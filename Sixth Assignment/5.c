#include <stdio.h>

typedef struct { // 좌표를 저장하는 POINT 구조체 자료형 정의
    float x; // x 좌표
    float y; // y 좌표
} POINT;

POINT midpoint(POINT a, POINT b)
{
    POINT mid; // 계산한 중점을 저장할 구조체 변수

    mid.x = (a.x + b.x) / 2.0f; // 두 x 좌표의 평균 계산
    mid.y = (a.y + b.y) / 2.0f; // 두 y 좌표의 평균 계산

    return mid; // 중점 좌표를 POINT 구조체로 반환
}

int main(void)
{
    POINT a, b, result; // 두 좌표와 중점 좌표 구조체 변수

    printf("첫 좌표: ");
    scanf("%f %f", &a.x, &a.y); // 첫 번째 좌표 입력

    printf("둘째 좌표: ");
    scanf("%f %f", &b.x, &b.y); // 두 번째 좌표 입력

    result = midpoint(a, b); // 함수에서 반환한 중점 구조체 저장
    printf("중점: (%.2f, %.2f)\n", result.x, result.y);

    return 0;
}
