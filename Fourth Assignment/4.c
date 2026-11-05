#include <stdio.h>

int main(void)
{
    int i, j, k, row, col;

    // 3행 4열 2차원 좌석 배열 생성 및 0으로 전체 초기화
    int seat[3][4] = {0};

    // 3번의 예약 요청 처리 반복문
    for (k = 1; k <= 3; k++)
    {
        printf("요청 %d: ", k); // 요청 회차 출력
        scanf("%d %d", &row, &col); // 예약 행과 열 입력

        // 좌석 번호 유효 범위 검사
        if ((row < 1 || row > 3) || (col < 1 || col > 4))
        {
            printf(" - 범위 오류\n"); // 범위 초과 오류 출력
        }
        // 이미 예약 완료된 좌석인지 검사
        else if (seat[row - 1][col - 1] == 1)
        {
            printf(" - 이미 예약된 좌석\n"); // 중복 예약 안내 출력
        }
        // 예약 처리 가능 시 1로 값 변경
        else
        {
            printf(" - 예약 완료\n"); // 예약 완료 문구 출력
            seat[row - 1][col - 1] = 1; // 해당 위치 좌석 상태 1로 갱신
        }
    }

    printf("최종 좌석:\n"); // 최종 좌석 현황 안내 출력

    // 중첩 반복문을 통한 3행 4열 2차원 좌석 배치 출력
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", seat[i][j]); // 각 좌석 상태 출력
        }
        printf("\n"); // 행 단위 줄바꿈
    }

    return 0;
}