#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

static int total = 0; // 파일 범위 정적 변수 total을 0으로 초기화한다.

void add_value(int value) // 전달받은 값을 누적하는 함수를 정의한다.
{
    total += value; // 파일 범위 변수 total에 전달값을 누적한다.
}

int get_total(void) // 현재 total 값을 반환하는 함수를 정의한다.
{
    return total; // 현재 누적된 total 값을 반환한다.
}