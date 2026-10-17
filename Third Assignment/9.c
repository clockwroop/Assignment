#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

void change_score(int score); // 점수 변경 함수 프로토타입을 선언한다.

void change_score(int score) // 매개변수로 전달받은 복사본을 수정하는 함수를 정의한다.
{
    score += 10; // 매개변수 score에 10을 더한다.
    printf("함수 내부 score: %d\n", score); // 함수 내부의 score 값을 출력한다.
}

int main(void) // 메인 함수를 정의한다.
{
    int score = 80; // main 함수의 지역변수 score를 80으로 초기화한다.
    
    printf("호출 전 score: %d\n", score); // 함수 호출 전 score 값을 출력한다.
    change_score(score); // score 값을 복사하여 인수로 전달한다.
    printf("호출 후 score: %d\n", score); // 함수 호출 후 main 변수 score 값을 출력한다.
    
    return 0; // 함수를 종료한다.
}