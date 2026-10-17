#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

double read_celsius(void); // 섭씨온도 입력 함수 프로토타입을 선언한다.
double to_fahrenheit(double celsius); // 화씨 변환 함수 프로토타입을 선언한다.
void print_result(double celsius, double fahrenheit); // 결과 출력 함수 프로토타입을 선언한다.

double read_celsius(void) // 섭씨온도를 입력받는 함수를 정의한다.
{
    double c; // 섭씨온도 변수를 정의한다.
    printf("섭씨온도를 입력하세요: "); // 입력 프롬프트를 출력한다.
    scanf("%lf", &c); // 섭씨온도를 더블 타입으로 입력받는다.
    return c; // 입력받은 섭씨온도를 반환한다.
}

double to_fahrenheit(double celsius) // 섭씨를 화씨로 변환하는 함수를 정의한다.
{
    return (celsius * 9.0 / 5.0) + 32.0; // 변환 공식을 적용하여 화씨온도를 반환한다.
}

void print_result(double celsius, double fahrenheit) // 결과를 출력하는 함수를 정의한다.
{
    printf("섭씨 %.2f도 = 화씨 %.2f도\n", celsius, fahrenheit); // 변환된 온도를 형식에 맞춰 출력한다.
}

int main(void) // 메인 함수를 정의한다.
{
    double c, f; // 섭씨와 화씨 변수를 정의한다.
    
    c = read_celsius(); // 섭씨온도를 입력받는다.
    f = to_fahrenheit(c); // 입력받은 섭씨온도를 화씨로 변환한다.
    print_result(c, f); // 최종 변환 결과를 출력한다.
    
    return 0; // 함수를 종료한다.
}