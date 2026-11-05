#include <stdio.h>

int main(void)
{
    int i, j, matrix[3][3];
    // 각 행의 합, 각 열의 합, 전체 원소 합을 저장할 변수 초기화
    int row_sum[3] = {0}, col_sum[3] = {0}, total = 0;

    printf("3×3 정수 입력:\n");

    // 중첩 반복문으로 3x3 원소를 입력받으면서 행과 열의 합을 누적한다.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j]; // i번째 행의 합 누적
            col_sum[j] += matrix[i][j]; // j번째 열의 합 누적
        }
        total += row_sum[i]; // 각 행의 합을 더해 전체 합을 계산한다.
    }

    // 각 행의 합 출력
    printf("행의 합: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // 각 열의 합 출력
    printf("열의 합: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", col_sum[i]);
    }
    printf("\n");

    // 전체 합 출력
    printf("전체 합: %d\n", total);

    return 0;
}