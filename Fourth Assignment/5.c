#include <stdio.h>

int main(void)
{
    int i, j, matrix[3][3];
    // 행 합계 배열, 열 합계 배열, 전체 총합 변수 0으로 초기화
    int row_sum[3] = {0}, col_sum[3] = {0}, total = 0;

    printf("3×3 정수 입력:\n"); // 행렬 입력 안내 문구 출력

    // 중첩 반복문으로 3x3 정수 입력 및 행·열 합계 동시 계산
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]); // i행 j열 원소 입력
            row_sum[i] += matrix[i][j]; // i번째 행 합계 누적
            col_sum[j] += matrix[i][j]; // j번째 열 합계 누적
        }
        total += row_sum[i]; // 각 행의 합계를 더해 전체 총합 계산
    }

    // 각 행의 합계 결과 출력
    printf("행의 합: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // 각 열의 합계 결과 출력
    printf("열의 합: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", col_sum[i]);
    }
    printf("\n");

    // 전체 행렬 총합 출력
    printf("전체 합: %d\n", total);

    return 0;
}