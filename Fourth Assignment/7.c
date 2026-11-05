#include <stdio.h>

// 함수 선언: score 변수의 메모리 주소를 전달받는다.
void correct_score(int *score);

int main(void)
{
    int score; // 점수를 저장할 정수형 변수 선언

    printf("점수 입력: "); // 점수 입력 안내 문구 출력
    scanf("%d", &score);   // 사용자로부터 점수 입력받기

    printf("보정 전: %d\n", score); // 입력된 원본 점수 출력

    // score 변수의 주소(&score)를 함수로 넘겨 원본 값을 직접 보정하도록 한다.
    correct_score(&score);

    printf("보정 후: %d\n", score); // 보정된 점수 출력

    return 0;
}

// 포인터 간접 참조를 통해 main의 원본 score 값을 조건에 맞게 보정하는 함수
void correct_score(int *score)
{
    // score가 가리키는 주소의 실제 값이 0보다 작으면 0으로 보정한다.
    if (*score < 0)
    {
        *score = 0;
    }
    // score가 가리키는 주소의 실제 값이 100보다 크면 100으로 보정한다.
    else if (*score > 100)
    {
        *score = 100;
    }
    // 0~100 사이의 정상 범위 값은 별도의 변경 없이 유지된다.
}