#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

long power(int base, int exponent); // 거듭제곱 재귀함수 프로토타입을 선언한다.

long power(int base, int exponent) // 재귀 호출을 이용해 거듭제곱을 구하는 함수를 정의한다.
{
    if (exponent == 0) // 기저 조건으로 지수가 0인지 검사한다.
        return 1; // 0제곱의 결과인 1을 반환한다.
        
    return base * power(base, exponent - 1); // base에 이전 제곱 결과를 재귀적으로 곱해 반환한다.
}

int main(void) // 메인 함수를 정의한다.
{
    int base, exponent; // 밑과 지수 변수를 정수 타입으로 정의한다.
    
    printf("밑을 입력하세요: "); // 밑 입력 프롬프트를 출력한다.
    scanf("%d", &base); // 밑을 정수 타입으로 입력받는다.
    
    printf("지수를 입력하세요: "); // 지수 입력 프롬프트를 출력한다.
    scanf("%d", &exponent); // 지수를 정수 타입으로 입력받는다.
    
    if (exponent < 0) // 지수가 음수인지 검사한다.
    {
        printf("오류: 지수는 0 이상이어야 합니다.\n"); // 오류 안내문을 출력한다.
        return 0; // 프로그램을 종료한다.
    }
    
    printf("%d의 %d제곱: %ld\n", base, exponent, power(base, exponent)); // 거듭제곱 계산 결과를 출력한다.
    
    return 0; // 함수를 종료한다.
}