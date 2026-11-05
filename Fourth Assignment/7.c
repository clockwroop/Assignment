#include <stdio.h>

// 함수 프로토타입 선언
void correct_score(int *score);

int main(void)
{
    int score; // 변수 생성

    printf("점수 입력: "); // 점수 입력 요구 출력문
    scanf("%d", &score); // 점수 입력
    printf("보정 전: %d\n", score); // 입력된 점수 출력

    // 점수 보정 함수 호출 (score 변수의 주소 전달)
    correct_score(&score);

    printf("보정 후: %d\n", score); // 보정된 점수 출력

    return 0;
}

// 포인터 역참조를 통해 main의 실제 score 값을 직접 보정하는 함수 정의
void correct_score(int *score)
{
    // score가 가리키는 주소의 값이 0보다 작을 경우
    if (*score < 0)
    {
        *score = 0; // 0으로 보정
    }
    // score가 가리키는 주소의 값이 100보다 클 경우
    else if (*score > 100)
    {
        *score = 100; // 100으로 보정
    }
}