#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, count = 0; // 반복 변수 및 일치한 문자열 개수

    // 키워드와 검색 대상이 전달되었는지 검사
    if (argc < 3)
    {
        printf("사용법: finder 키워드 검색대상1 검색대상2 ...\n");
        return 1;
    }

    // strstr로 키워드를 포함하는 문자열 개수 계산
    for (i = 2; i < argc; i++)
    {
        if (strstr(argv[i], argv[1]) != NULL)
        {
            count++; // 일치한 문자열 개수 증가
        }
    }

    printf("검색 키워드: %s\n", argv[1]); // 입력한 검색 키워드 출력
    printf("검색 대상: %d개\n", argc - 2); // 전체 검색 대상 개수 출력
    printf("일치 개수: %d\n", count); // 일치한 문자열 개수 출력

    // 키워드를 포함하는 문자열만 입력 순서대로 출력
    for (i = 2; i < argc; i++)
    {
        if (strstr(argv[i], argv[1]) != NULL)
        {
            printf("%s\n", argv[i]); // 일치한 문자열 출력
        }
    }

    return 0;
}
