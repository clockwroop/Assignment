#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int candy = 17, people = 5; // 사탕 수와 사람 수를 정수 타입으로 정의 후 값을 초기화한다.
    
    int share; // 한 사람당 받는 몫의 타입을 정의한다.
    share = candy / people; // 나눗셈 연산자로 몫을 계산해 초기화한다.
    
    int remain; // 남는 사탕 수의 타입을 정의한다.
    remain = candy % people; // 나머지 연산자로 나머지를 계산해 초기화한다.
    
    printf("한 사람당 사탕 수: %d\n", share); // 한 사람당 받는 사탕 수를 정수 타입으로 출력한다.
    printf("남는 사탕 수: %d\n", remain); // 남는 사탕 수를 정수 타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}