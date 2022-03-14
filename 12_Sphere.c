#include<stdio.h>
#include<math.h>

int main()
{
    double R,VOLUME;
    const double PI=3.14159;
    scanf("%lf",&R);
    VOLUME=(4.0/3.0)*PI*pow(R,3);
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
