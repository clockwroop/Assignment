#include <stdio.h>

int main()
{
    int i, j, matrix[3][3];
    int row_sum[3] = {0}, col_sum[3] = {0}, total = 0;
    
    printf("3×3 정수 입력:\n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
        
        total += row_sum[i];
    }
    
    printf("행의 합: ");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", row_sum[i]);
    }
    printf("%d\n", row_sum[2]);
    
    printf("열의 합: ");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", col_sum[i]);
    }
    printf("%d\n", col_sum[2]);

    
    printf("전체 합: %d\n", total);
    
    return 0;
}
