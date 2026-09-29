#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int price = 2500, count = 3; // 가격과 수량을 정수타입으로 정의 후 값을 초기화한다.
    
    printf("가격을 입력하세요: "); // 가격 입력 프롬프트를 출력한다.
    scanf("%d", &price); // 가격값을 정수 타입으로 입력 받는다.
    
    printf("수량을 입력하세요: "); // 수량 입력 프롬프트를 출력한다.
    scanf("%d", &count); // 수량값을 정수 타입으로 입력 받는다.
    
    int total; // 총금액을 정수타입으로 정의한다.
    total = price * count; // 총금액의 값을 초기화한다.
    
    printf("총금액: %d원\n", total); // 총금액의 값을 정수타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}