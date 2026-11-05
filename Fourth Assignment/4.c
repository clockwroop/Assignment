#include <stdio.h>

int main(void)
{
    int i, j, k, row, col;

    // 3행 4열 2차원 배열을 선언하고 모든 좌석을 0(예약 가능 상태)으로 초기화한다.
    int seat[3][4] = {0};

    // 3번의 예약 요청을 반복 처리한다.
    for (k = 1; k <= 3; k++)
    {
        printf("요청 %d: ", k);
        scanf("%d %d", &row, &col); // 사용자는 1~3행, 1~4열 기준으로 입력

        // 입력받은 좌석 번호가 허용 범위를 벗어났는지 확인한다.
        if ((row < 1 || row > 3) || (col < 1 || col > 4))
        {
            printf(" - 범위 오류\n");
        }
        // 사용자가 입력한 위치(row-1, col-1)가 이미 1로 예약되어 있는지 확인한다.
        else if (seat[row - 1][col - 1] == 1)
        {
            printf(" - 이미 예약된 좌석\n");
        }
        // 예약이 가능한 경우 1로 상태를 변경한다.
        else
        {
            printf(" - 예약 완료\n");
            seat[row - 1][col - 1] = 1;
        }
    }

    printf("최종 좌석:\n");

    // 중첩 for 문을 사용하여 3x4 전체 좌석 상태를 행렬 형태로 출력한다.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", seat[i][j]); // i행 j열 좌석 상태 출력
        }
        printf("\n"); // 한 행 출력이 끝나면 줄바꿈
    }

    return 0;
}