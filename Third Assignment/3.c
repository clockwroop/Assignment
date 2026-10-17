#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int menu, count, price, total; // 메뉴, 수량, 단가, 총금액 변수를 정수 타입으로 정의한다.
    
    printf("메뉴 번호: "); // 메뉴 번호 입력 프롬프트를 출력한다.
    scanf("%d", &menu); // 메뉴 번호를 정수 타입으로 입력받는다.
    
    printf("수량: "); // 수량 입력 프롬프트를 출력한다.
    scanf("%d", &count); // 수량을 정수 타입으로 입력받는다.
    
    switch (menu) // 메뉴 번호에 따라 분기한다.
    {
        case 1: // 1번 메뉴일 때 실행한다.
            price = 2000; // 단가를 2000원으로 설정한다.
            break; // switch 문을 탈출한다.
        case 2: // 2번 메뉴일 때 실행한다.
            price = 3500; // 단가를 3500원으로 설정한다.
            break; // switch 문을 탈출한다.
        case 3: // 3번 메뉴일 때 실행한다.
            price = 4000; // 단가를 4000원으로 설정한다.
            break; // switch 문을 탈출한다.
        default: // 잘못된 메뉴 번호일 때 실행한다.
            printf("오류입니다.\n"); // 오류 안내문을 출력한다.
            return 0; // 프로그램을 종료한다.
    }
    
    total = price * count; // 단가와 수량을 곱해 총금액을 계산한다.
    printf("할인 전 금액: %d원\n", total); // 할인 전 금액을 출력한다.
    
    if (total >= 10000) // 총금액이 10,000원 이상인지 검사한다.
    {
        total = (int)(total * 0.9); // 10% 할인을 적용하여 계산한다.
    }
    
    printf("최종 결제 금액: %d원\n", total); // 최종 결제 금액을 출력한다.
    
    return 0; // 함수를 종료한다.
}