#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

int main(void) // 메인 함수를 정의한다.
{
    int number; // number 변수를 정수 타입으로 정의한다.
    char classroom; // classroom 변수를 문자 타입으로 정의한다.
    
    printf("번호와 반을 입력하세요: "); // 번호와 반을 입력 받는 프롬프트를 출력한다.
    
    scanf("%d %c", &number, &classroom); // number 와 classroom 변수에 입력 받은 값을 저장한다.
    
    printf("학생 번호: %d\n", number); // number 변수를 정수 타입으로 출력한다.
    printf("반: %c", classroom); // classroom 변수를 문자 타입으로 출력한다.

    return 0; // 함수를 종료한다.
}