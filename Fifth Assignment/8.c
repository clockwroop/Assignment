#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *words[] = {"orange", "apple", "grape", "banana"}; // 문자열 포인터 배열
    const char *temp; // 포인터 교환용 임시 변수
    int i, j; // 반복 변수

    // 문자열 내용을 복사하지 않고 포인터끼리 교환하여 오름차순 정렬
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                temp = words[i]; // 현재 문자열 포인터 임시 저장
                words[i] = words[j]; // 앞서는 문자열 포인터로 변경
                words[j] = temp; // 나머지 포인터 저장
            }
        }
    }

    printf("정렬 결과:\n");
    for (i = 0; i < 4; i++)
        printf("%s\n", words[i]); // 정렬된 문자열을 한 줄씩 출력

    return 0;
}
