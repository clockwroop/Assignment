#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int value, count = 0, total = 0, maxval = -1; // 입력값, 개수, 합계, 최댓값 변수를 정의하고 초기화한다.
    double avg = 0.0; // 평균 변수를 더블 타입으로 정의하고 초기화한다.

    printf("점수 입력(-1 종료): "); // 점수 입력 프롬프트를 출력한다.

    while (scanf("%d", &value) == 1) // 정수 입력을 성공적으로 받는 동안 반복한다.
    {
        if (value == -1) // 종료 조건인 -1인지 검사한다.
            break; // 반복문을 탈출한다.

        if (value < 0 || value > 100) // 0~100 범위를 벗어난 값인지 검사한다.
            continue; // 통계 처리를 건너뛰고 다음 입력을 진행한다.

        count++; // 유효 점수 개수를 1 증가시킨다.
        total += value; // 합계에 현재 점수를 누적한다.
        if (value > maxval) // 현재 점수가 기존 최댓값보다 큰지 비교한다.
            maxval = value; // 최댓값을 갱신한다.
    }

    if (count > 0) // 유효 점수가 1개 이상 존재하는지 검사한다.
    {
        avg = (double)total / count; // 캐스팅을 이용해 실수 평균을 계산한다.
        printf("유효 점수 개수: %d\n", count); // 유효 점수 개수를 출력한다.
        printf("합계: %d\n", total); // 합계를 출력한다.
        printf("최댓값: %d\n", maxval); // 최댓값을 출력한다.
        printf("평균: %.2f\n", avg); // 평균을 소수 둘째 자리까지 출력한다.
    }
    else // 유효한 점수가 없는 경우 실행한다.
    {
        printf("유효한 점수가 입력되지 않았습니다.\n"); // 오류 안내문을 출력한다.
    }

    return 0; // 함수를 종료한다.
}