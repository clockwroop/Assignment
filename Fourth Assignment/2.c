#include <stdio.h>

int main(void)
{
    // i: 반복 제어 변수, start/end: 사용자 입력 구간, arr: 정수 10개 배열, sum: 합계
    int i, start, end, arr[10], sum = 0;
    double avg; // 구간 평균을 저장할 실수형 변수

    printf("정수 10개 입력: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]); // 배열의 0번부터 9번 인덱스까지 10개 정수 입력
    }

    printf("시작 위치: ");
    scanf("%d", &start); // 1~10 기준 시작 위치 입력

    printf("끝 위치: ");
    scanf("%d", &end);   // 1~10 기준 끝 위치 입력

    // 예외 처리: 배열 범위를 벗어났거나(1 미만, 10 초과) 시작 위치가 끝 위치보다 큰 경우
    if (start < 1 || start > 10 || end < 1 || end > 10 || start > end)
    {
        printf("입력 범위 오류입니다.\n"); // 오류 메시지 출력 후 정상 계산을 진행하지 않는다.
    }
    else
    {
        // 사용자의 입력(1~10)을 배열 인덱스(0~9)로 맞추기 위해 start-1부터 end-1까지 순회한다.
        for (i = start - 1; i < end; i++)
        {
            sum += arr[i]; // 구간 내 원소들의 값을 sum에 누적
        }

        // 구간 내 원소의 개수인 (end - start + 1)로 나누어 실수형 평균을 계산한다.
        avg = (double)sum / (end - start + 1);

        // 정상 처리된 구간 합과 평균 출력
        printf("구간 합: %d\n", sum);
        printf("구간 평균: %.2f\n", avg);
    }

    return 0;
}