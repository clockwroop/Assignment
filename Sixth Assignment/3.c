#include <stdio.h>

struct member { // 회원 정보를 저장하는 구조체 정의
    int id; // 회원번호
    char name[20]; // 이름
    int point; // 포인트
};

int main(void)
{
    struct member m, *p; // 회원 구조체 변수와 구조체 포인터
    int bonus, before; // 추가 포인트와 변경 전 포인트

    printf("회원 입력: ");
    scanf("%d %19s %d", &m.id, m.name, &m.point); // 회원 정보 입력

    p = &m; // 포인터 p가 회원 구조체 m을 가리키도록 설정
    before = p->point; // 변경 전 포인트 저장

    printf("추가 포인트: ");
    scanf("%d", &bonus); // 추가할 포인트 입력

    p->point += bonus; // 구조체 포인터를 이용하여 원본 포인트 증가

    printf("변경 전 포인트: %d\n", before);
    printf("변경 후 포인트: %d\n", p->point);

    return 0;
}
