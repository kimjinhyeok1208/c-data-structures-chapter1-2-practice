#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* O(n) */
void linear(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        count++;

    printf("O(n) 반복 횟수: %d\n", count);
}

/* O(n^2) */
void quadratic(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            count++;

    printf("O(n^2) 반복 횟수: %d\n", count);
}

/* O(log n) */
void logarithmic(int n)
{
    int count = 0;
    while (n > 1)
    {
        n /= 2;
        count++;
    }

    printf("O(log n) 반복 횟수: %d\n", count);
}

int time_complexity_main()
{
    int n;

    printf("n을 입력하시오: ");
    scanf("%d", &n);

    linear(n);
    quadratic(n);
    logarithmic(n);

    return 0;
}
