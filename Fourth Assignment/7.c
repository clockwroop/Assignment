#include <stdio.h>

// 함수 원형 선언 (score 변수의 주소 전달)
void correct_score(int *score);

int main(void)
{
    int score; // 변수 생성 (메모리 할당, 값 X)[cite: 15]

    printf("점수 입력: "); // 점수 입력 요구 출력문[cite: 15]
    scanf("%d", &score);   // 점수 입력[cite: 15]

    printf("보정 전: %d\n", score); // 입력된 점수 출력[cite: 15]

    // 점수 보정 함수 호출 (score 변수의 주소 전달)[cite: 15]
    correct_score(&score);

    printf("보정 후: %d\n", score); // 보정된 점수 출력[cite: 15]

    return 0;
}

// 포인터 역참조를 통해 main의 실제 score 값을 직접 보정하는 함수 정의[cite: 15]
void correct_score(int *score)
{
    // score가 가리키는 주소의 값(main의 score)이 0보다 작을 경우[cite: 15]
    if (*score < 0)
    {
        *score = 0; // 0으로 보정[cite: 15]
    }
    // score가 가리키는 주소의 값(main의 score)이 100보다 클 경우[cite: 15]
    else if (*score > 100)
    {
        *score = 100; // 100으로 보정[cite: 15]
    }
}