#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)   // main 함수 시작
{
    int books = 12, students = 5;   // 책의 수와 학생 수를 각각 12와 5로 초기화
    double first = 12 / 5;   // 정수끼리 나눈 결과를 double형 변수에 저장
    double average = (double)12 / 5;   // 형변환을 적용하여 정확한 평균 계산

    printf("일반 나눗셈 결과: %.1f권\n", first);   // 소수 첫째 자리까지 일반 정수 나눗셈의 결과 출력
    printf("캐스팅 적용 평균: %.1f권\n", average);   // 소수 첫째 자리까지 형변환을 적용한 평균 출력

    return 0;   // 함수 종료
}