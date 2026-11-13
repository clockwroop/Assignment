#include <stdio.h>
#include <string.h>

int main(void)
{
    char path[200]; // 입력된 파일 경로 저장 배열
    char *filename, *extension; // 파일명 및 확장자 시작 위치 포인터

    printf("경로 입력: ");
    scanf("%199s", path); // 공백 없는 경로 입력

    filename = strrchr(path, '/'); // 마지막 슬래시 위치 검색
    if (filename != NULL)
        filename++; // 슬래시 다음 문자부터 파일명 시작
    else
        filename = path; // 슬래시가 없으면 전체 문자열이 파일명

    extension = strrchr(filename, '.'); // 파일명에서 마지막 점 위치 검색

    printf("파일명: %s\n", filename);
    if (extension != NULL)
        printf("확장자: %s\n", extension + 1); // 점 다음부터 확장자 출력
    else
        printf("확장자 없음\n"); // 점이 없을 때 안내

    return 0;
}
