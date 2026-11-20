#include <stdio.h>

union price { // 통화별 가격이 같은 기억공간을 공유하는 공용체 정의
    int won; // 원화 가격
    float dollar; // 달러 가격
    float euro; // 유로 가격
};

int main(void)
{
    union price sale; // 선택한 통화의 가격을 저장하는 공용체 변수
    int choice; // 통화 종류 선택 변수

    printf("통화 선택(1:원, 2:달러, 3:유로): ");
    scanf("%d", &choice); // 통화 종류 입력

    // 선택한 통화의 공용체 멤버 하나에만 가격 저장
    if (choice == 1)
    {
        printf("가격 입력: ");
        scanf("%d", &sale.won); // 원화 가격 입력
        printf("표시 가격: %d원\n", sale.won);
    }
    else if (choice == 2)
    {
        printf("가격 입력: ");
        scanf("%f", &sale.dollar); // 달러 가격 입력
        printf("표시 가격: %.2f달러\n", sale.dollar);
    }
    else if (choice == 3)
    {
        printf("가격 입력: ");
        scanf("%f", &sale.euro); // 유로 가격 입력
        printf("표시 가격: %.2f유로\n", sale.euro);
    }
    else
    {
        printf("잘못된 통화 선택입니다.\n"); // 1~3 이외의 선택 처리
    }

    return 0;
}
