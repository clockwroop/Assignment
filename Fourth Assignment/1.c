#include <stdio.h>

int main(void)
{
    // 반복 제어 변수 i, 점수 7개를 담을 배열, 합계를 누적할 sum 변수 선언
    int i, score[7], sum = 0;

    printf("점수 입력: "); // 점수 입력 안내 문구 출력

    // 7명의 점수를 입력받아 배열에 저장하고 동시에 합계를 누적한다.
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &score[i]); // i번째 위치에 점수 입력
        sum += score[i];        // 입력받은 점수를 sum에 누적
    }

    // 배열의 첫 번째 원소로 최댓값과 최솟값을 초기화한다.
    int max = score[0];
    int min = score[0];
    int count = 0; // 평균 이상인 학생 수를 셀 변수

    // 실수형 나눗셈을 위해 sum을 double형으로 형변환하여 평균을 계산한다.
    double avg = (double)sum / 7;

    // 두 번째 원소(인덱스 1)부터 비교하여 최댓값과 최솟값을 갱신한다.
    for (i = 1; i < 7; i++)
    {
        if (score[i] > max) // 현재 값이 기존 max보다 크면 갱신
        {
            max = score[i];
        }

        if (score[i] < min) // 현재 값이 기존 min보다 작으면 갱신
        {
            min = score[i];
        }
    }

    // 배열을 다시 순회하며 평균 이상인 점수의 개수를 센다.
    for (i = 0; i < 7; i++)
    {
        if (score[i] >= avg)
        {
            count++; // 평균 이상이면 카운트 1 증가
        }
    }

    // 통계 결과 출력
    printf("최고점: %d\n", max);
    printf("최저점: %d\n", min);
    printf("평균: %.2f\n", avg);
    printf("평균 이상 학생 수: %d\n", count);

    return 0;
}