#include<stdio.h>

int main()
{
    int number,workedHours;
    double salaryPerMonth,salary;
    
    scanf("%d",&number);
    scanf("%d",&workedHours);
    scanf("%lf",&salaryPerMonth);
     
    salary = workedHours * salaryPerMonth;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",number,salary);

    return 0;
}
