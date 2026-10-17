#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int digit_sum(int n); // 자릿수 합 재귀함수 프로토타입을 선언한다.

int digit_sum(int n) // 재귀 호출을 이용해 자릿수 합을 구하는 함수를 정의한다.
{
    if (n < 10) // 기저 조건으로 한 자리 수인지 검사한다.
        return n; // 한 자리 수이면 자기 자신을 반환한다.
    
    return (n % 10) + digit_sum(n / 10); // 마지막 자릿수와 나머지 자릿수의 재귀 호출 합을 반환한다.
}

int main(void) // 메인 함수를 정의한다.
{
    int n; // n 변수를 정수 타입으로 정의한다.
    
    printf("양의 정수를 입력하세요: "); // 정수 입력 프롬프트를 출력한다.
    scanf("%d", &n); // 정수 n을 입력받는다.
    
    printf("자릿수의 합: %d\n", digit_sum(n)); // digit_sum 반환값을 정수 타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}