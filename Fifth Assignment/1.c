#include <stdio.h>
#include <string.h>

int main(void)
{
    char original[200], work[200]; // 원본 문장 및 단어 분리용 배열
    char *token; // 분리한 단어의 시작 주소 저장
    int count = 0; // 단어 수 저장 변수

    printf("문장 입력: "); // 문장 입력 안내
    fgets(original, sizeof(original), stdin); // 공백을 포함한 한 줄 입력
    original[strcspn(original, "\n")] = '\0'; // 입력 끝의 줄바꿈 문자 제거

    strcpy(work, original); // 원본 보존을 위해 작업 배열에 복사
    token = strtok(work, " "); // 공백 기준 첫 번째 단어 분리
    while (token != NULL)
    {
        count++; // 분리된 단어 수 증가
        token = strtok(NULL, " "); // 다음 단어 분리
    }

    printf("원본 문장: %s\n", original);
    printf("문자 수: %zu\n", strlen(original)); // 원본 문자열 길이 출력
    printf("단어 수: %d\n", count);

    return 0;
}
