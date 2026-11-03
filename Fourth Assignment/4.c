#include <stdio.h>

int main()
{
    int i, j, k, row, col;
    
    int seat[3][4] = {0};
    
    for (k = 1; k < 4; k++)
    {
        printf("요청 %d: ", k);
        scanf("%d %d", &row, &col);
        
        if ((row < 1 || row > 3) || (col < 1 || col > 4))
        {
            printf(" - 범위 오류\n");
        }
        else if (seat[row-1][col-1] == 1)
        {
                printf(" - 이미 예약된 좌석\n");
        }
        else
        {
            printf(" - 예약 완료\n");
            seat[row-1][col-1] = 1;
        }
    }
    
    printf("최종 좌석:\n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", seat[i][j]);
        }
        printf("%d", seat[i][3]);
        printf("\n");
    }
    
    return 0;
}
