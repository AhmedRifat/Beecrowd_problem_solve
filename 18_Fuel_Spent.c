#include<stdio.h>

int main()
{
    int time,velocity,distance,perLitre=12;
    double litre;
    scanf("%d",&time);
    scanf("%d",&velocity);
    distance=time*velocity;
    litre=(double)distance/(double)perLitre;
    printf("%.3lf\n",litre);
    return 0;
}
