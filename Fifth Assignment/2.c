#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char prices[200]; // 쉼표로 구분된 가격 문자열 배열
    char *token; // 분리된 가격 문자열 주소
    int count = 0; // 가격 개수
    double sum = 0, avg; // 가격 합계 및 평균

    printf("가격 목록: ");
    scanf("%199s", prices); // 쉼표 포함 문자열 입력

    token = strtok(prices, ","); // 쉼표 기준 첫 가격 분리
    while (token != NULL)
    {
        sum += atof(token); // 문자열을 실수로 변환하여 합계 누적
        count++; // 가격 개수 증가
        token = strtok(NULL, ","); // 다음 가격 분리
    }

    avg = count > 0 ? sum / count : 0; // 가격 개수로 평균 계산
    printf("가격 개수: %d\n", count);
    printf("총합: %.2f\n", sum);
    printf("평균: %.2f\n", avg);

    return 0;
}
