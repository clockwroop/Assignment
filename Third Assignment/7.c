/*
세 정수 입력 후
max3 함수: 최댓값 반환
min3 함수: 최솟값 반환
average3 함수: 평균 반환
main 에서 세 함수 호출

*/

#include <stdio.h>

int max3(int, int, int);
int min3(int, int, int);
double average3(int, int, int);

int max3(int x, int y, int z)
{
    int max = (x > y) ? x : y;
    return (z > max) ? z : max;
}

int min3(int x, int y, int z)
{
    int min = (x > y) ? y : x;
    return (z < min) ? z : min;
}

double average3(int x, int y, int z)
{
    double avg;
    
    avg = (double)(x + y + z) / 3.0;

    return avg;
}


int main()
{
    int a, b, c;

    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("최댓값: %d\n", max3(a, b, c));
    printf("최솟값: %d\n", min3(a, b, c));
    printf("평균: %.2f\n", average3(a, b, c));
    return 0;
}