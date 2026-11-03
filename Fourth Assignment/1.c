#include <stdio.h>

int main()
{
    int i, score[7], sum = 0;
    
    printf("점수 입력: ");
    
    for (i = 0; i<7; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    
    int max = score[0];
    int min = score[0];
    int count = 0;
    double avg = (double) sum / 7;
    
    for (i = 1; i < 7; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
        }
        
        if (score[i] < min)
        {
            min = score[i];
        }
    }
    
    for (i = 0; i < 7; i++)
    {
        if (score[i] >= avg)
        {
            count++;
        }
    }
    
    printf("최고점: %d\n", max);
    printf("최저점: %d\n", min);
    printf("평균: %.2f\n", avg);
    printf("평균 이상 학생 수: %d\n", count);
    
    return 0;
}