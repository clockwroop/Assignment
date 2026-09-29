#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)   // main 함수 시작
{
    enum Difficulty {   // 게임 난이도를 나타내는 정의
        EASY = 1, NORMAL = 2, HARD = 3
    };

    enum Difficulty difficulty;   // 난이도를 저장할 변수 선언
    difficulty = HARD;   // 난이도를 어려움으로 설정

    typedef unsigned int Life;   // unsigned int 자료형을 Life라는 이름으로 정의
    Life lives = 3;   // 남은 목숨을 3개로 초기화

    printf("난이도: %d\n", difficulty);   // 현재 난이도 출력
    printf("남은 목숨: %u개\n", lives);   // 남은 목숨 출력

    return 0;   // 함수 종료
}