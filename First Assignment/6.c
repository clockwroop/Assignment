#include <stdio.h>   // 표준 입출력 함수 사용 선언

int main(void)        // main 함수 시작
{
    double distance = 4.50;   // 달린 거리를 4.50km로 초기화
    float minutes = 30.0f;    // 운동 시간을 30.0분으로 초기화
    double speed;             // 평균 속도 변수 선언

    speed = distance / (minutes / 60.0);   // 운동 시간의 단위 변환(분->시) 후 평균 속도 계산

    printf("달린 거리: %.2fkm\n", distance);   // 소숫점 둘째 자리까지 달린 거리 출력
    printf("운동 시간: %.1f분\n", minutes);     // 소숫점 첫째 자리까지 운동 시간 출력
    printf("평균 속도: %.2fkm/h\n", speed);     // 소숫점 둘째 자리까지 평균 속도 출력

    return 0;   // 함수 종료
}