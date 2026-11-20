#include <stdio.h>

struct student { // 학생 정보를 저장하는 구조체 정의
    int id; // 학번
    char name[20]; // 이름
    float GPA; // 평점
};

int main(void)
{
    struct student students[4]; // 입력 순서대로 저장할 학생 구조체 배열
    struct student *rank[4], *temp; // GPA 순위용 포인터 배열과 교환용 임시 포인터
    int i, j; // 반복 변수

    printf("학생 정보 입력:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d %19s %f", &students[i].id, students[i].name, &students[i].GPA); // 학생 정보 입력
        rank[i] = &students[i]; // 각 학생 구조체의 주소를 포인터 배열에 저장
    }

    // 학생 구조체 자체는 유지하고 포인터만 교환하여 GPA 내림차순 정렬
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (rank[i]->GPA < rank[j]->GPA)
            {
                temp = rank[i]; // 현재 학생 포인터 임시 저장
                rank[i] = rank[j]; // GPA가 높은 학생의 포인터로 변경
                rank[j] = temp; // 나머지 학생 포인터 저장
            }
        }
    }

    printf("GPA 순위\n");
    for (i = 0; i < 4; i++)
        printf("%d위: %d %s %.2f\n", i + 1, rank[i]->id, rank[i]->name, rank[i]->GPA); // 순위별 학생 정보 출력

    return 0;
}
