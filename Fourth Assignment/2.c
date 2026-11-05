#include <stdio.h>

int main(void)
{
    // 변수 생성 (반복 변수 i, 시작/끝 위치 start/end, 10개 정수 배열 arr, 구간 합 sum)
    int i, start, end, arr[10], sum = 0;
    double avg; // 구간 평균 저장용 실수 변수

    printf("정수 10개 입력: "); // 정수 10개 입력 안내 문구 출력
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]); // 0번부터 9번 인덱스까지 정수 입력
    }

    printf("시작 위치: "); // 시작 위치 입력 요구
    scanf("%d", &start); // 사용자 기준 시작 위치(1~10) 입력

    printf("끝 위치: "); // 끝 위치 입력 요구
    scanf("%d", &end); // 사용자 기준 끝 위치(1~10) 입력

    // 예외 처리 (배열 인덱스 초과 또는 시작 위치가 끝 위치보다 큰 경우)
    if (start < 1 || start > 10 || end < 1 || end > 10 || start > end)
    {
        printf("입력 범위 오류입니다.\n"); // 오류 메시지 출력
    }
    else
    {
        // 0 기반 인덱스 보정(start-1) 후 구간 내 원소 합 누적
        for (i = start - 1; i < end; i++)
        {
            sum += arr[i]; // 구간 합 누적
        }

        // 구간 개수(end - start + 1) 기준 실수형 평균 계산
        avg = (double)sum / (end - start + 1);

        // 구간 합 및 평균 결과 출력
        printf("구간 합: %d\n", sum);
        printf("구간 평균: %.2f\n", avg);
    }

    return 0;
}