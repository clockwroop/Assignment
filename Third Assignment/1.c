/*
<분석>
현재 잔액과 출금할 금액 정수 입력
출금 가능: 출금액 양수 & 1,000단위 & 현재 잔액 이하
조건 불만족시: 오류 원인 출력
정상 출금: 출금 후 잔액 출력

<알고리즘>
balance, amount 정수 입력 받음
if 문: (amount > 0) & (amount % 1000 = 0) & (amount <= balance)
: {출금 후 잔액: }
else if 안에 if 문 대입
if 문: 
if (amount <= 0): {출금액이 음수\n}
if (amount % 1000 != 0): {출금액이 1,000원 단위가 아님\n}
if (amount > balance): {출금액이 잔액을 초과함\n}

*/

#include <stdio.h>

int main()
{
    int balance, amount;
    printf("현재 잔액을 입력하세요: ");
    scanf("%d", &balance);
    printf("출금액을 입력하세요: ");
    scanf("%d", &amount);
    
    if ((amount > 0) && (amount % 1000 == 0) && (amount <= balance))
    {
        balance -= amount;
        printf("출금 후 잔액: %d원", balance);
    }
    else
    {
        if (amount <= 0)
            printf("출금액이 음수입니다.\n");
        if (amount % 1000 != 0)
            printf("출금액이 1,000원 단위가 아닙니다.\n");
        if (amount > balance)
            printf("출금액이 잔액을 초과했습니다.\n");
    }
    
    return 0;
}