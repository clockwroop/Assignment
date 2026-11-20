#include <stdio.h>

struct date { // 생일의 월과 일을 저장하는 구조체 정의
    int month; // 생일 월
    int day; // 생일 일
};

struct student { // 학생 정보와 생일 정보를 묶는 중첩 구조체 정의
    int id; // 학번
    char name[20]; // 이름
    struct date birthday; // 생일을 저장하는 date 구조체 멤버
};

int main(void)
{
    struct student s[4]; // 학생 4명의 정보를 저장하는 구조체 배열
    int i, month, count = 0; // 반복 변수, 검색할 월, 해당 월의 생일 학생 수

    printf("학생 정보 입력:\n");
    for (i = 0; i < 4; i++)
        scanf("%d %19s %d %d", &s[i].id, s[i].name, &s[i].birthday.month, &s[i].birthday.day); // 학생 정보와 생일 입력

    printf("검색할 월: ");
    scanf("%d", &month); // 검색할 생일 월 입력

    // 중첩 구조체의 월을 비교하여 해당하는 학생만 출력
    for (i = 0; i < 4; i++)
    {
        if (s[i].birthday.month == month)
        {
            printf("%d %s %d월 %d일\n", s[i].id, s[i].name, s[i].birthday.month, s[i].birthday.day);
            count++; // 검색한 월에 생일이 있는 학생 수 증가
        }
    }

    printf("총 %d명\n", count);

    return 0;
}
