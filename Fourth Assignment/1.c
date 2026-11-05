#include <stdio.h>

int main(void)
{
    // 변수 생성 (반복 변수 i, 점수 7개 저장용 배열 score, 누적 합계 sum)
    int i, score[7], sum = 0;

    printf("점수 입력: "); // 점수 입력 안내 문구 출력

    // 점수 7개 반복 입력 및 합계 누적
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &score[i]); // i번째 위치에 점수 입력
        sum += score[i]; // 입력받은 점수 합계 누적
    }

    // 최댓값, 최솟값 초기화 (배열의 0번째 원소 기준)
    int max = score[0];
    int min = score[0];
    int count = 0; // 평균 이상 학생 수 카운트 변수

    // 실수형 평균 계산
    double avg = (double)sum / 7;

    // 1번째 원소부터 끝까지 순회하며 최고점 및 최저점 탐색
    for (i = 1; i < 7; i++)
    {
        if (score[i] > max) // 기존 최댓값보다 클 경우 갱신
        {
            max = score[i];
        }

        if (score[i] < min) // 기존 최솟값보다 작을 경우 갱신
        {
            min = score[i];
        }
    }

    // 배열 재순회 및 평균 이상 학생 수 카운트
    for (i = 0; i < 7; i++)
    {
        if (score[i] >= avg)
        {
            count++; // 조건 만족 시 카운트 1 증가
        }
    }

    // 최종 통계 결과 출력
    printf("최고점: %d\n", max);
    printf("최저점: %d\n", min);
    printf("평균: %.2f\n", avg);
    printf("평균 이상 학생 수: %d\n", count);

    return 0;
}