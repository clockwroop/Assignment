#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int test, attendance; // 시험 점수와 출석 점수 변수를 정수 타입으로 정의한다.
    char grade; // 학점 변수를 문자 타입으로 정의한다.
    
    printf("시험 점수: "); // 시험 점수 입력 프롬프트를 출력한다.
    scanf("%d", &test); // 시험 점수를 정수 타입으로 입력받는다.
    
    printf("출석 점수: "); // 출석 점수 입력 프롬프트를 출력한다.
    scanf("%d", &attendance); // 출석 점수를 정수 타입으로 입력받는다.
    
    if (test < 0 || test > 100 || attendance < 0 || attendance > 100) // 입력 점수 범위를 검사한다.
    {
        printf("입력 오류입니다.\n"); // 범위 초과 오류 메시지를 출력한다.
        return 0; // 프로그램을 종료한다.
    }
    
    if (test >= 90) // 90점 이상인지 검사한다.
        grade = 'A'; // A 학점을 대입한다.
    else if (test >= 80) // 80점 이상인지 검사한다.
        grade = 'B'; // B 학점을 대입한다.
    else if (test >= 70) // 70점 이상인지 검사한다.
        grade = 'C'; // C 학점을 대입한다.
    else if (test >= 60) // 60점 이상인지 검사한다.
        grade = 'D'; // D 학점을 대입한다.
    else // 60점 미만인 경우 실행한다.
        grade = 'F'; // F 학점을 대입한다.
        
    printf("학점: %c\n", grade); // 부여된 학점을 문자 타입으로 출력한다.
    
    if ((grade == 'A' || grade == 'B') && attendance >= 80) // 장학금 수혜 조건을 검사한다.
    {
        printf("장학금 대상입니다.\n"); // 대상 안내문을 출력한다.
    }
    else // 수혜 조건을 만족하지 못한 경우 실행한다.
    {
        printf("장학금 비대상입니다.\n"); // 비대상 안내문을 출력한다.
    }
    
    return 0; // 함수를 종료한다.
}