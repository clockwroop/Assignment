#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)      // main 함수 시작
{
    int price = 1200, count = 3;   // 책 가격, 초기수량 초기화
    int total = price * count;     // 초기 총 금액 계산

    printf("처음 금액: %d원\n", total);   // 초기 총 금액 출력
    
    count += 2;    // 책 추가
    total = price * count;   // 새 수량에 맞춰 총 금액 다시 계산

    printf("최종 수량: %d권\n", count);   // 최종 수량 출력
    printf("최종 금액: %d원\n", total);   // 최종 총 금액 출력

    return 0;   // 함수 종료
}