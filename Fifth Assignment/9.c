#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a, b, result; // 두 정수와 연산 결과 저장

    // 명령줄 인수 개수 검사
    if (argc != 4)
    {
        printf("사용법: calc 정수 add|sub|mul 정수\n");
        return 1;
    }

    a = atoi(argv[1]); // 첫 번째 인수를 정수로 변환
    b = atoi(argv[3]); // 세 번째 인수를 정수로 변환

    // strcmp로 연산 문자열을 비교하여 계산
    if (strcmp(argv[2], "add") == 0)
    {
        result = a + b; // 덧셈 수행
    }
    else if (strcmp(argv[2], "sub") == 0)
    {
        result = a - b; // 뺄셈 수행
    }
    else if (strcmp(argv[2], "mul") == 0)
    {
        result = a * b; // 곱셈 수행
    }
    else
    {
        printf("사용법: calc 정수 add|sub|mul 정수\n"); // 잘못된 연산자 처리
        return 1;
    }

    printf("실행: calc %s %s %s\n", argv[1], argv[2], argv[3]); // 실행 인수 출력
    printf("계산 결과: %d\n", result); // 연산 결과 출력

    return 0;
}
