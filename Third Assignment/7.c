#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int max3(int, int, int); // 최댓값 반환 함수의 프로토타입을 선언한다.
int min3(int, int, int); // 최솟값 반환 함수의 프로토타입을 선언한다.
double average3(int, int, int); // 평균 반환 함수의 프로토타입을 선언한다.

int max3(int x, int y, int z) // 세 정수 중 최댓값을 반환하는 함수를 정의한다.
{
    int max = (x > y) ? x : y; // x와 y 중 큰 값을 선택한다.
    return (z > max) ? z : max; // 이전 결과와 z 중 더 큰 값을 반환한다.
}

int min3(int x, int y, int z) // 세 정수 중 최솟값을 반환하는 함수를 정의한다.
{
    int min = (x < y) ? x : y; // x와 y 중 작은 값을 선택한다.
    return (z < min) ? z : min; // 이전 결과와 z 중 더 작은 값을 반환한다.
}

double average3(int x, int y, int z) // 세 정수의 평균을 반환하는 함수를 정의한다.
{
    double avg; // 평균 변수를 더블 타입으로 정의한다.
    avg = (double)(x + y + z) / 3.0; // 캐스팅을 이용해 실수 평균을 계산한다.
    return avg; // 계산된 평균을 반환한다.
}

int main(void) // 메인 함수를 정의한다.
{
    int a, b, c; // 세 정수 변수를 정의한다.

    printf("세 정수를 입력하세요: "); // 정수 입력 프롬프트를 출력한다.
    scanf("%d %d %d", &a, &b, &c); // 세 정수를 공백으로 구분하여 입력받는다.
    
    printf("최댓값: %d\n", max3(a, b, c)); // 최댓값 함수 반환값을 출력한다.
    printf("최솟값: %d\n", min3(a, b, c)); // 최솟값 함수 반환값을 출력한다.
    printf("평균: %.2f\n", average3(a, b, c)); // 평균 함수 반환값을 소수 둘째 자리까지 출력한다.
    
    return 0; // 함수를 종료한다.
}