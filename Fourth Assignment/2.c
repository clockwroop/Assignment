#include <stdio.h>

int main(void)
{
    // i: 반복문 변수, start/end: 사용자 지정 구간, arr: 정수 10개 배열, sum: 합계
    int i, start, end, arr[10], sum = 0;
    double avg; // 구간 평균을 저장할 실수형 변수

    printf("정수 10개 입력: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]); // 배열의 0번 인덱스부터 9번 인덱스까지 정수 입력
    }

    printf("시작 위치: ");
    scanf("%d", &start); // 1~10 기준 시작 위치 입력

    printf("끝 위치: ");
    scanf("%d", &end);   // 1~10 기준 끝 위치 입력

    // 입력값(1~10)을 배열 인덱스(0~9)로 맞추기 위해 start-1부터 순회한다.
    for (i = start - 1; i < end; i++)
    {
        sum += arr[i]; // 구간 내 원소들의 값을 누적
    }

    // 구간 원소의 개수인 (end - start + 1)로 나누어 평균을 계산한다.
    avg = (double)sum / (end - start + 1);

    printf("구간 합: %d\n", sum);
    printf("구간 평균: %.2f\n", avg);

    return 0;
}