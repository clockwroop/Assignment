#include <stdio.h>

int main(void)
{
    char info[200], code[50], result[200]; // 입력, 상품코드, 결과 문자열 배열
    int price, quantity, total; // 단가, 수량, 총액 변수

    printf("상품 정보: ");
    fgets(info, sizeof(info), stdin); // 상품 정보 한 줄 입력

    sscanf(info, "%49s %d %d", code, &price, &quantity); // 상품코드, 단가, 수량 분리
    total = price * quantity; // 총 금액 계산
    sprintf(result, "%s: %d원", code, total); // 결과 문자열 생성

    printf("결과: %s\n", result); // 최종 결과 출력

    return 0;
}
