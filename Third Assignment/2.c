/*
시험, 출석 점수 0~100 정수 입력
90+: A, 80+: B ... F 까지 구분 후 학점(grade) 정의
((A || B) && 출석 >= 80): 장학금 대상 // 나머지는 비대상 출력
*/

#include <stdio.h>

int main()
{
    int test, attendance;
    char grade;
    printf("시험 점수: ");
    scanf("%d", &test);
    printf("출석 점수: ");
    scanf("%d", &attendance);
    
    if ((test * attendance > 0) && (test + attendance > 0))
        if (test >= 90)
            grade = 'A';
        else if (test >= 80)
            grade = 'B';
        else if (test >= 70)
            grade = 'C';
        else if (test >= 60)
            grade = 'D';
        else
            grade = 'F';
    
    printf("학점: %lc\n", grade);
    
    if (((grade == 'A') || (grade == 'B')) && attendance >= 80)
        printf("장학금 대상입니다.");
    else
        printf("장학금 비대상입니다.");
    return 0;
}