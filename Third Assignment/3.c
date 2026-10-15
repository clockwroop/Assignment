/*
int menu, count, price, total
메뉴 번호(menu), 수량 입력(count)
switch (menu)
case 1: 
	price = 2000;
	break;
else if menu == 2: price = 3000
else if menu == 3: price = 4000
else
	printf("오류입니다\n");
	// 오류 나면 다시 입력 받아야하나?

total = price * count
printf("할인 전 금액: ", total);

total > 10000:
	total *= 0.9
printf("\n최종 결제 금액: ", total

*/

#include <stdio.h>

int main()
{
   int menu, count, price, total;
   while (1) // 경고: 무한 루프이다.
   {
    
        printf("메뉴 번호: ");
        scanf("%d", &menu);
        printf("수량: ");
        scanf("%d", &count);
       
        switch (menu)
        {
            case 1: 
	            price = 2000;
	            break;
            case 2:
                price = 3500;
                break;
            case 3:
                price = 4000;
                break;
            default:
	            printf("오류입니다\n");
	            continue;
        }
        break;
    }

    total = price * count;
    printf("할인 전 금액: %d원", total);

    if (total > 10000)
	    total *= 0.9;
    
    printf("\n최종 결제 금액: %d원", total);
    
    return 0;
}