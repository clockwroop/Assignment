#include <stdio.h>

struct student { // 학번, 이름, GPA를 저장하는 구조체 정의
    int id; // 학번
    char name[20]; // 이름
    float GPA; // 평점
};

int main(void)
{
    struct student s[5]; // 학생 5명의 정보를 저장하는 구조체 배열
    int i, max = 0; // 반복 변수와 최고 GPA 학생의 배열 첨자
    float sum = 0, avg; // 전체 GPA 합계와 평균

    printf("학생 정보 입력:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d %19s %f", &s[i].id, s[i].name, &s[i].GPA); // 학생별 정보 입력
        sum += s[i].GPA; // 각 학생의 GPA 누적

        if (s[i].GPA > s[max].GPA)
            max = i; // 더 높은 GPA를 가진 학생의 첨자 저장
    }

    avg = sum / 5; // 전체 학생의 GPA 평균 계산

    printf("전체 GPA 평균: %.2f\n", avg);
    printf("최고 GPA 학생: %d %s %.2f\n", s[max].id, s[max].name, s[max].GPA);

    return 0;
}
