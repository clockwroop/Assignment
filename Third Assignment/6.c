/*
1~9 정수 N 입력
행 행*2 행*3 ... 행*행을 1~N행까지 출력

조건: 중첩 for 문
*/

#include <stdio.h>

int main()
{
    int N;
    
    printf("N을 입력하세요: ");
    scanf("%d", &N);

    if (N < 1 || N > 9)
    {
        printf("오류: N이 범위를 벗어났습니다.\n");
        return 0; // 오류 발생 시 조기 종료
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            for (int k = 1; k <= i; k++)
            {
                // 마지막 숫자가 아닐 때만 공백 출력
                if (k == i)
                    printf("%d", i * k);
                else
                    printf("%d ", i * k);
            }
            printf("\n");
        }
    }
}