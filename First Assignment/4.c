#include <stdio.h>   // 표준 입출력 함수 사용 선언

#define PI 3.14   // 원주율 정의

int main(void)      // main 함수 시작
{
    const double RADIUS = 10.0;   // 반지름을 10.0으로 초기화
    double area;    // 피자 넓이 변수 선언

    area = PI * RADIUS * RADIUS;   // 피자 넓이 계산 초기화
    
    printf("피자 반지름: %.1fcm\n", RADIUS);   // 소숫점 첫째자리까지 반지름 출력
    printf("피자 넓이: %.2fcm^2\n", area);    // 소숫점 둘째자리까지 넓이 출력

    return 0;   // 함수 종료
}