#include <stdio.h>

void double_values(int a[], int length);

int main()
{
    int i, x[5];
    
    printf("입력 배열: ");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    
    printf("변경 전: ");
     for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    
    double_values(x, 5);
    
    printf("변경 후: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");    
    
    return 0;
}

void double_values(int a[], int length)
{
    int j;
    
    for (j = 0; j < length; j++)
    {
        a[j] *= 2;
    }
}