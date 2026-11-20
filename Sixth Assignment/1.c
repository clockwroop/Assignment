#include <stdio.h>

struct student { // 학생 정보를 저장하는 구조체 정의
    int id; // 학번
    char name[20]; // 이름
    int midterm; // 중간고사 점수
    int final; // 기말고사 점수
};

int main(void)
{
    struct student s; // 학생 1명의 정보를 저장하는 구조체 변수
    float avg; // 평균 점수

    printf("학생 정보 입력: ");
    scanf("%d %19s %d %d", &s.id, s.name, &s.midterm, &s.final); // 학생 정보 입력

    avg = (s.midterm + s.final) / 2.0f; // 중간고사와 기말고사의 평균 계산

    printf("학번: %d\n", s.id);
    printf("이름: %s\n", s.name);
    printf("중간고사: %d\n", s.midterm);
    printf("기말고사: %d\n", s.final);
    printf("평균: %.2f\n", avg); // 소수 둘째 자리까지 평균 출력

    return 0;
}
