#include<stdio.h>

int main()
{
    int codeProduct1,codeProduct2,unitProduct1,unitProduct2;
    double priceProduct1,priceProduct2,TOTAL=0;

    scanf("%d %d %lf",&codeProduct1,&unitProduct1,&priceProduct1);
    scanf("%d %d %lf",&codeProduct2,&unitProduct2,&priceProduct2);

    TOTAL=(unitProduct1*priceProduct1)+(unitProduct2*priceProduct2);
    printf("VALOR A PAGAR: R$ %.2lf\n",TOTAL);
    return 0;
}
