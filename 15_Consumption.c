#include<stdio.h>

int main()
{
    int X;
    double Y,Velocity;
    scanf("%d",&X);
    scanf("%lf",&Y);
    Velocity=(double)X/Y;
    printf("%.3lf km/l\n",Velocity);
    return 0;
}
