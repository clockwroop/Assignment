#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *words[] = {"spring", "winter", "programming", "fall", "summer"}; // 문자열 포인터 배열
    const char *longest = words[0]; // 첫 문자열을 최장 문자열로 초기화
    int i; // 반복 변수

    // 각 문자열의 길이를 비교하여 가장 긴 문자열의 주소 저장
    for (i = 1; i < 5; i++)
    {
        if (strlen(words[i]) > strlen(longest))
            longest = words[i]; // 더 긴 문자열을 발견하면 포인터 갱신
    }

    printf("가장 긴 문자열: %s\n", longest);
    printf("문자열 길이: %zu\n", strlen(longest));

    return 0;
}
