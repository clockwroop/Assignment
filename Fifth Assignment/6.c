#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100], second[100]; // 입력 문자열 배열
    char first_second[201], second_first[201]; // 조합 문자열 배열

    printf("첫 문자열: ");
    scanf("%99s", first); // 첫 문자열 입력
    printf("둘째 문자열: ");
    scanf("%99s", second); // 둘째 문자열 입력

    strcpy(first_second, first); // 첫 문자열 복사
    strcat(first_second, "_"); // 두 문자열 사이 밑줄 추가
    strcat(first_second, second); // 두 번째 문자열 연결

    strcpy(second_first, second); // 두 번째 문자열 복사
    strcat(second_first, "_"); // 밑줄 추가
    strcat(second_first, first); // 첫 문자열 연결

    printf("조합 1: %s\n", first_second);
    printf("조합 2: %s\n", second_first);

    // 문자열을 사전식으로 비교하여 앞서는 조합 출력
    if (strcmp(first_second, second_first) <= 0)
        printf("앞서는 문자열: %s\n", first_second);
    else
        printf("앞서는 문자열: %s\n", second_first);

    return 0;
}
