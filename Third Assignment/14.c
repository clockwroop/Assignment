#include <stdio.h> // 표준 입출력 헤더 파일을 추가한다.

void accumulate(int value); // 호출 횟수 및 누적 함수 프로토타입을 선언한다.

void accumulate(int value) // 호출 시마다 누적값과 호출 횟수를 갱신해 출력하는 함수를 정의한다.
{
    static int total = 0; // 누적값을 저장할 static 지역변수를 0으로 초기화한다.
    static int count = 0; // 호출 횟수를 저장할 static 지역변수를 0으로 초기화한다.
    
    count++; // 호출 횟수를 1 증가시킨다.
    total += value; // 전달받은 값을 누적합에 더한다.
    
    printf("%d번째 호출: 입력값 = %d, 누적값 = %d\n", count, value, total); // 호출 횟수와 결과를 출력한다.
}

int main(void) // 메인 함수를 정의한다.
{
    accumulate(10); // 10을 인수로 전달하여 함수를 호출한다.
    accumulate(20); // 20을 인수로 전달하여 함수를 호출한다.
    accumulate(-5); // -5를 인수로 전달하여 함수를 호출한다.
    accumulate(15); // 15를 인수로 전달하여 함수를 호출한다.
    
    return 0; // 함수를 종료한다.
}