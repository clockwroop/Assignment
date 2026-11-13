#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[200], keyword[100]; // 문장과 검색어 배열
    char *found; // 검색된 위치의 주소 저장

    printf("문장 입력: ");
    fgets(sentence, sizeof(sentence), stdin); // 공백 포함 문장 입력
    sentence[strcspn(sentence, "\n")] = '\0'; // 줄바꿈 제거

    printf("키워드 입력: ");
    scanf("%99s", keyword); // 검색할 키워드 입력

    found = strstr(sentence, keyword); // 키워드 첫 등장 위치 검색
    if (found != NULL)
        printf("검색 결과: %s\n", found); // 발견 위치부터 문장 끝까지 출력
    else
        printf("검색 결과 없음\n"); // 키워드가 없는 경우

    return 0;
}
