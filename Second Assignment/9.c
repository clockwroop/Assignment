#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int books = 12, students = 5; // 책 수와 학생 수를 정수 타입으로 정의 후 값을 초기화한다.
    
    int avg1; // 정수 평균의 타입을 정의한다.
    avg1 = books / students; // 정수 나눗셈을 수행해 초기화한다.
    
    double avg2; // 실수 평균의 타입을 정의한다.
    avg2 = (double) books / students; // 타입 캐스팅을 이용해 실수 나눗셈을 수행해 초기화한다.
    
    printf("정수 나눗셈 결과: %d\n", avg1); // 정수 나눗셈 결과를 정수 타입으로 출력한다.
    printf("실수 나눗셈 결과: %.2f\n", avg2); // 실수 나눗셈 결과를 소수 둘째 자리까지 출력한다.
    
    return 0; // 함수를 종료한다.
}