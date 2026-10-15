/*
int n;
2이상 정수 조건문
2이면 소수 출력
3이상이면 2~n-1 반복문
if n%i == 0: break
결과 출력
*/

#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &n);
    
    if (n < 2)
    {
        printf("입력값이 잘못되었습니다.\n");
        return 0; // 프로그램 조기 종료로 아래 출력 차단
    }

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("%d은 소수입니다.\n", n);
    else
        printf("%d은 소수가 아닙니다.\n", n);

    return 0;
}