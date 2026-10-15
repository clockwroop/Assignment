/*
무한 루프
	정수 입력
	scanf("%d"
	if 정수 == -1:
		break
	if 정수 > 100:
		제외
	

*/

#include <stdio.h>

int main()
{
    int value, count = 0, total = 0, maxval = -1;
    double avg = 0.0;

    printf("점수 입력(-1 종료): ");

    while (scanf("%d", &value) == 1)
    {
        if (value == -1)
            break;

        // 0~100 범위를 벗어난 값 제외
        if (value < 0 || value > 100)
            continue;

        count++;
        total += value;
        if (value > maxval)
            maxval = value;
    }

    if (count > 0)
    {
        avg = (double)total / count;
        printf("유효 점수 개수: %d\n", count);
        printf("합계: %d\n", total);
        printf("최댓값: %d\n", maxval);
        printf("평균: %.2f\n", avg);
    }
    else
    {
        printf("유효한 점수가 입력되지 않았습니다.\n");
    }

    return 0;
}