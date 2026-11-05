#include <stdio.h>

// 함수 원형 선언 (변수 주소를 전달받기 위한 포인터 매개변수 선언)
void swap(int *p, int *q);

int main(void)
{
    int a, b; // 교환할 두 정수 변수 생성

    printf("두 정수 입력: "); // 입력 안내 문구 출력
    scanf("%d %d", &a, &b);   // 두 정수 값 입력

    // 함수 호출 전 main 변수 값 출력
    printf("호출 전: a=%d, b=%d\n", a, b);

    // swap 함수 호출 (main 변수 a, b의 메모리 주소 전달)
    swap(&a, &b);

    // 함수 호출 후 간접 참조로 변경된 main 변수 값 출력
    printf("호출 후: a=%d, b=%d\n", a, b);

    return 0;
}

// 포인터 역참조를 통해 원본 메모리의 두 값을 맞바꾸는 함수 정의
void swap(int *p, int *q)
{
    int temp; // 값 임시 저장용 변수 생성

    temp = *p; // p가 가리키는 실제 메모리 값(a)을 temp에 임시 저장
    *p = *q;   // q가 가리키는 실제 값(b)을 p의 메모리 주소 위치에 대입
    *q = temp; // temp에 보관한 값을 q의 메모리 주소 위치에 대입
}