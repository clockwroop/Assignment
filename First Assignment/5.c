#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)      // main 함수 시작
{
    float weightF = 123.456789f;   // float형 값 저장
    double weightD = 123.456789;   // double형 값 저장

    printf("float 측정값: %.9fg\n", weightF);   // 소숫점 아홉번째자리까지 float 값 출력
    printf("double 측정값: %.9fg\n", weightD);  // 소숫점 아홉번째자리까지 double 값 출력

    return 0;   // 함수 종료
}

/*
< 출력 결과 차이의 이유 >
float는 32비트로 저장되어 정밀도가 낮아 근삿값으로 저장되고,
double은 64비트로 저장되어 더 정확하게 표현되기 때문에
결과값이 다르게 출력된다.
*/