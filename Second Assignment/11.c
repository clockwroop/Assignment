#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    unsigned int value = 11; // value 변수를 부호 없는 정수 타입으로 정의 후 값을 초기화한다.
    
    unsigned int left; // 왼쪽 이동 결과의 타입을 정의한다.
    left = value << 1; // 1비트 왼쪽으로 이동한 값을 대입한다.
    
    unsigned int right; // 오른쪽 이동 결과의 타입을 정의한다.
    right = value >> 1; // 1비트 오른쪽으로 이동한 값을 대입한다.
    
    printf("원래 값: %d\n", value); // 원래 값을 출력한다.
    printf("1비트 왼쪽 이동: %d\n", left); // 1비트 왼쪽 이동 결과를 출력한다.
    printf("1비트 오른쪽 이동: %d\n", right); // 1비트 오른쪽 이동 결과를 출력한다.
    
    return 0; // 함수를 종료한다.
}