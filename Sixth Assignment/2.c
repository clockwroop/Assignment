#include <stdio.h>

struct product { // 상품 정보를 저장하는 구조체 정의
    int code; // 상품번호
    char name[20]; // 상품명
    int stock; // 재고량
};

int main(void)
{
    struct product original, backup; // 원본 상품과 백업 상품 구조체 변수

    printf("상품 입력: ");
    scanf("%d %19s %d", &original.code, original.name, &original.stock); // 상품 정보 입력

    backup = original; // 구조체 전체를 대입하여 기존 상품 정보 백업

    printf("재고 변경: ");
    scanf("%d", &original.stock); // 원본 상품의 재고량 변경

    printf("변경 후 재고: %d\n", original.stock);
    printf("백업 재고: %d\n", backup.stock); // 백업된 기존 재고량 출력

    original = backup; // 백업 구조체를 대입하여 원본 상품 정보 복원
    printf("복원 후 재고: %d\n", original.stock);

    return 0;
}
