#include <stdio.h>

int main()
{
    int i, start, end, arr[10], sum = 0;
    double avg;
    
    printf("정수 10개 입력: ");
    
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("시작 위치: ");
    scanf("%d", &start);
    
    printf("끝 위치: ");
    scanf("%d", &end);
    
    for (i = start-1; i < end; i++)
    {
        sum += arr[i];
    }
    
    avg = (double) sum / (end - start + 1);
    
    printf("구간 합: %d\n", sum);
    printf("구간 평균: %.2f\n", avg);
    
    return 0;
}
