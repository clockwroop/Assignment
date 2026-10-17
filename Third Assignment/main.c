#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

void add_value(int value); // 외부 누적 함수 프로토타입을 선언한다.
int get_total(void); // 외부 누적값 반환 함수 프로토타입을 선언한다.

int main(void) // 메인 함수를 정의한다.
{
    int a, b, c; // 세 정수 변수를 정의한다.
    
    scanf("%d %d %d", &a, &b, &c); // 세 정수를 공백으로 구분하여 입력받는다.
    
    add_value(a); // 첫 번째 값을 누적 함수에 전달한다.
    add_value(b); // 두 번째 값을 누적 함수에 전달한다.
    add_value(c); // 세 번째 값을 누적 함수에 전달한다.
    
    printf("최종 누적값: %d\n", get_total()); // get_total 함수 반환값을 출력한다.
    
    return 0; // 함수를 종료한다.
}