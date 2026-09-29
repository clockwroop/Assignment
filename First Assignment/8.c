#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)   // main 함수 시작
{
    int base = 100;       // 기본 포인트를 100점으로 초기화
    double bonus = 25.75; // 추가 포인트를 25.75점으로 초기화
    double total;         // 계산된 전체 포인트를 저장할 변수 선언

    total = base + bonus;   // 기본 포인트와 추가 포인트를 더하여 전체 포인트 계산

    int earned;   // 실제 적립 포인트를 저장할 정수형 변수 선언
    earned = total;   // 전체 포인트의 소수 부분을 버리고 정수형으로 변환

    printf("계산된 포인트: %.2f점\n", total);   // 소수 둘째 자리까지 전체 포인트 출력
    printf("실제 적립 포인트: %d점\n", earned);   // 실제 적립된 포인트를 정수로 출력

    return 0;   // 함수 종료
}