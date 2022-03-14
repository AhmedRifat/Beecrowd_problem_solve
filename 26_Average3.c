#include <stdio.h>

int main()
{
    double num1, num2, num3, num4, avg, num5, finalAvg;
rerun:
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    if ((num1 < 0 || num1 > 10) || (num2 < 0 || num2 > 10) || (num3 < 0 || num3 > 10) || (num4 < 0 || num4 > 10))
    {
        goto rerun;
    }
    avg = (num1 * 2 + num2 * 3 + num3 * 4 + num4 * 1) / (2 + 3 + 4 + 1);
    printf("Media: %.1lf\n", avg);
    if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
    again:
        scanf("%lf", &num5);
        printf("Nota do exame: %.1lf\n", num5);
        if (num5 < 0 || num5 > 10)
        {
            goto again;
        }
        finalAvg = (num5 + avg) / 2;
        if (finalAvg <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        else if (finalAvg >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        printf("Media final: %.1lf\n", finalAvg);
    }
    return 0;
}
