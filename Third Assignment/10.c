#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int next_ticket(void); // 순번 발급 함수 프로토타입을 선언한다.

int next_ticket(void) // 호출 시마다 순번을 증가시켜 반환하는 함수를 정의한다.
{
    static int ticket = 100; // static 지역변수를 100으로 초기화한다.
    ticket++; // 순번을 1 증가시킨다.
    return ticket; // 갱신된 순번을 반환한다.
}

int main(void) // 메인 함수를 정의한다.
{
    printf("첫 번째 번호: %d\n", next_ticket()); // 첫 번째 발급 번호를 출력한다.
    printf("두 번째 번호: %d\n", next_ticket()); // 두 번째 발급 번호를 출력한다.
    printf("세 번째 번호: %d\n", next_ticket()); // 세 번째 발급 번호를 출력한다.
    
    return 0; // 함수를 종료한다.
}