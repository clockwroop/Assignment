#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)      // main 함수 시작
{
    int age = 20;   // 나이 변수 선언 및 값 초기화
    double height = 175.5;   // 키 변수 선언 및 값 초기화
    char grade = 'A';        // 회원 등급 변수 선언 및 값 초기화

    printf("나이: %d세\n", age);   // 나이 출력
    printf("키: %.1fcm\n", height); // 소숫점 첫째자리까지 키 출력
    printf("회원 등급: %c\n", grade); // 등급 출력

    return 0;   // 함수 종료
}