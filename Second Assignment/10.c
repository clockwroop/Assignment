#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int score = 95, attendance = 85; // 시험 점수와 출석 점수를 정수 타입으로 정의 후 값을 초기화한다.
    
    int scholarship; // 장학금 대상 여부의 타입을 정수로 정의한다.
    scholarship = (score >= 90) && (attendance >= 80); // 관계 연산자와 논리 연산자로 대상 여부를 계산해 초기화한다.
    
    printf("장학금 대상 여부: %d\n", scholarship); // 장학금 대상 여부 결과를 정수 타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}