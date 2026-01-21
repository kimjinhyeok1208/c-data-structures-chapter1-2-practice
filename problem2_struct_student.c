#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student 
{
    int id;
    char name[20];
    int kor;
    int eng;
    int math;
    double avg;
};

/* 평균 계산 함수 (포인터 사용) */
void calculate_average(struct Student* s)
{
    s->avg = (s->kor + s->eng + s->math) / 3.0;
}

int struct_student_main()
{
    struct Student students[100];
    int n;
    double total_avg = 0.0;

    printf("학생 수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n[%d번째 학생]\n", i + 1);
        printf("학번: ");
        scanf("%d", &students[i].id);

        printf("이름: ");
        scanf("%s", students[i].name);

        printf("국어 점수: ");
        scanf("%d", &students[i].kor);

        printf("영어 점수: ");
        scanf("%d", &students[i].eng);

        printf("수학 점수: ");
        scanf("%d", &students[i].math);

        calculate_average(&students[i]);
        total_avg += students[i].avg;
    }

    double class_avg = total_avg / n;

    printf("\n=== 평균 이상인 학생 목록 ===\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].avg >= class_avg)
        {
            printf("학번: %d, 이름: %s, 평균: %.2f\n",students[i].id, students[i].name,students[i].avg);
        }
    }

    return 0;
}
