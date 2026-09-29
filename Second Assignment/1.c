#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

#define PI 3.141592 // 파이값을 정의한다.
int main(void) // 메인 함수를 정의한다.
{
    double radius = 5.0; // 반지름을 더블 타입으로 초기화한다.
    
    double circumference; // 둘레의 타입을 정의한다.
    circumference = 2 * PI * radius; // 둘레의 값을 초기화한다.
    
    double area; // 넓이의 타입을 정의한다.
    area = PI * radius * radius; // 넓이의 값을 초기화한다.
    
    printf("반지름: %.1f\n", radius); // 반지름을 소숫점 한자리까지 더블타입으로 출력한다.
    printf("원의 둘레: %f\n", circumference); // 둘레를 더블타입으로 출력한다.
    printf("원의 넓이: %f\n", area); // 넓이를 더블타입으로 출력한다.
    
    return 0; // 함수를 종료한다.
}