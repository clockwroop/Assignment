#include <stdio.h>

// 함수 프로토타입 선언
void find_minmax(int a[], int length, int *min, int *max);

int main(void)
{
    int i, arr[6]; // 크기 6인 정수형 배열 생성
    int min, max; // 최솟값, 최댓값 저장 변수 생성

    printf("정수 6개 입력: "); // 입력 프롬프트 출력
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]); // 배열 원소 6개 입력
    }

    // find_minmax 함수 호출 (배열 주소와 min, max 변수의 주소 전달)
    find_minmax(arr, 6, &min, &max);

    // 간접 참조로 갱신된 최솟값과 최댓값 출력
    printf("최솟값: %d\n", min);
    printf("최댓값: %d\n", max);

    return 0;
}

// 배열 탐색 후 포인터를 통해 main의 변수에 결괏값을 직접 저장하는 함수 정의
void find_minmax(int a[], int length, int *min, int *max)
{
    int i;

    // 포인터가 가리키는 실제 변수에 배열 첫 번째 원소 값 대입
    *min = a[0];
    *max = a[0];

    // 1번째 인덱스부터 순회하며 최솟값 및 최댓값 비교 갱신
    for (i = 1; i < length; i++)
    {
        // 최솟값 조건 검사 및 역참조 값 갱신
        if (a[i] < *min)
        {
            *min = a[i]; // 더 작은 값 발견 시 갱신
        }

        // 최댓값 조건 검사 및 역참조 값 갱신
        if (a[i] > *max)
        {
            *max = a[i]; // 더 큰 값 발견 시 갱신
        }
    }
}