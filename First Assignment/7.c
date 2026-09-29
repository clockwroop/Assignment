#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)   // main 함수 시작
{
    char row = 'A';   // 현재 좌석의 행을 A로 초기화
    int number = 7;   // 현재 좌석의 번호를 5로 초기화

    printf("현재 좌석: %c%d\n", row, number);   // 현재 좌석의 행과 번호 출력
    
    row ++;   // 좌석의 행을 다음 행으로 변경
    
    printf("다음 행 좌석: %c%d\n", row, number);   // 변경된 다음 행의 좌석 출력
    return 0;   // 함수 종료
}