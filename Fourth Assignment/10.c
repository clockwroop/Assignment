#include <stdio.h>

// 함수 선언: 배열, 길이, 최솟값 저장용 주소, 최댓값 저장용 주소를 매개변수로 받는다.
void find_minmax(int a[], int length, int *min, int *max);

int main(void)
{
    int i, arr[6]; // 정수 6개를 담을 배열 선언
    int min, max;  // 최솟값과 최댓값을 저장할 변수 선언

    printf("정수 6개 입력: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]); // 6개의 정수 입력받기
    }

    // 배열의 주소와 min, max 변수의 주소를 전달하여 계산을 위임한다.
    find_minmax(arr, 6, &min, &max);

    // 함수 내부에서 간접 참조로 갱신된 main의 최솟값과 최댓값을 출력한다.
    printf("최솟값: %d\n", min);
    printf("최댓값: %d\n", max);

    return 0;
}

// 배열을 순회하며 구한 최솟값과 최댓값을 포인터로 전달받은 주소에 직접 저장하는 함수
void find_minmax(int a[], int length, int *min, int *max)
{
    int i;

    // 포인터가 가리키는 위치에 배열의 첫 번째 원소 값을 초기값으로 넣는다.
    *min = a[0];
    *max = a[0];

    // 두 번째 원소부터 끝까지 순회하며 비교한다.
    for (i = 1; i < length; i++)
    {
        // 현재 원소가 포인터가 가리키는 최솟값보다 작으면 갱신
        if (a[i] < *min)
        {
            *min = a[i];
        }

        // 현재 원소가 포인터가 가리키는 최댓값보다 크면 갱신
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}