#include <stdio.h>

struct student { // 학생의 이름과 평점을 저장하는 구조체 정의
    char name[20]; // 이름
    float GPA; // 평점
};

void add_value(struct student s, float bonus)
{
    s.GPA += bonus; // 복사된 구조체의 GPA만 증가하여 원본에는 영향 없음
}

void add_pointer(struct student *s, float bonus)
{
    s->GPA += bonus; // 포인터로 원본 구조체의 GPA 증가
}

int main(void)
{
    struct student s; // 학생 정보 구조체 변수
    float bonus; // 추가할 가산점

    printf("학생 입력: ");
    scanf("%19s %f", s.name, &s.GPA); // 학생 이름과 GPA 입력

    printf("가산점: ");
    scanf("%f", &bonus); // 추가 가산점 입력

    add_value(s, bonus); // 구조체 값을 전달하여 복사본의 GPA 변경
    printf("값 전달 후 GPA: %.2f\n", s.GPA); // 원본 GPA는 변하지 않음

    add_pointer(&s, bonus); // 구조체 주소를 전달하여 원본 GPA 변경
    printf("포인터 전달 후 GPA: %.2f\n", s.GPA);

    return 0;
}
