#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive_count = 0;
int iterative_count = 0;

/* 재귀 방식 */
int factorial_recursive(int n)
{
    recursive_count++;   // 함수 호출 카운트

    if (n <= 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

/* 반복 방식 */
int factorial_iterative(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        iterative_count++;   // 반복 횟수 카운트
        result *= i;
    }

    return result;
}

int recursion_vs_loop_main()
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    int r1 = factorial_recursive(n);
    int r2 = factorial_iterative(n);

    printf("\n[결과]\n");
    printf("재귀 팩토리얼 결과: %d\n", r1);
    printf("반복 팩토리얼 결과: %d\n", r2);

    printf("\n[연산 횟수 비교]\n");
    printf("재귀 함수 호출 횟수: %d\n", recursive_count);
    printf("반복문 실행 횟수: %d\n", iterative_count);

    return 0;
}
