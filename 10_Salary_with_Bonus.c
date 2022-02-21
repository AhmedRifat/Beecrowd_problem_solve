#include<stdio.h>

int main()
{
    char employeeName;
    double salary,sellerSold,TOTAL;
    scanf("%s",&employeeName);
    scanf("%lf",&salary);
    scanf("%lf",&sellerSold);
    TOTAL = (salary + (sellerSold * 15) / 100 );

    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
