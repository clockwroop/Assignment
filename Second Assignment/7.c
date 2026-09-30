#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int price = 1200, count = 4; // 가격과 수량을 정수 타입으로 정의 후 값을 초기화한다.
    
    int total; // 총금액을 정수 타입으로 정의한다.
    total = price * count; // 총금액의 값을 초기화한다.
    printf("공책 금액: %d원\n", total); // 공책 금액을 정수 타입으로 출력한다.
    
    total += 500; // 누적대입 연산자로 포장비 500원을 추가한다.
    printf("포장비 추가 후 총금액: %d원\n", total); // 포장비 추가 후 총금액을 정수 타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}