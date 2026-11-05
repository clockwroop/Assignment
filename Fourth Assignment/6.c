#include <stdio.h>

// 함수 원형 선언: 두 변수의 메모리 주소를 포인터 매개변수로 받는다.
void swap(int *p, int *q);

int main(void)
{
    int a, b; // 교환할 두 정수형 변수 선언

    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);

    // 함수 호출 전의 값 출력
    printf("호출 전: a=%d, b=%d\n", a, b);

    // main 변수 a와 b의 메모리 주소(&a, &b)를 swap 함수에 전달한다.
    swap(&a, &b);

    // swap 함수 내부의 간접 참조를 통해 main의 원본 값이 변경되었음을 확인한다.
    printf("호출 후: a=%d, b=%d\n", a, b);

    return 0;
}

// 두 포인터가 가리키는 원본 메모리의 값을 맞바꾸는 함수
void swap(int *p, int *q)
{
    int temp; // 값을 임시로 보관할 변수 선언

    temp = *p; // p가 가리키는 실제 값(a)을 temp에 임시 저장한다.
    *p = *q;   // q가 가리키는 실제 값(b)을 p가 가리키는 메모리에 덮어쓴다.
    *q = temp; // temp에 보관해 둔 값을 q가 가리키는 메모리에 넣는다.
}