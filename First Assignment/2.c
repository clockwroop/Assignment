#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)      // main 함수 시작
{
    int balance = 10000;   // 초기 잔액을 10000원으로 초기화

    printf("처음 잔액: %d원\n", balance);   // 초기 잔액 출력
    
    balance -= 1250;    // 버스 요금 1250원 차감
    
    printf("버스 이용 후: %d원\n", balance);   // 차감 후 잔액 출력

    balance += 5000;    // 5000원 충전
    
    printf("충전 후: %d원\n", balance);   // 충전 후 잔액 출력

    return 0;   // 함수 종료
}