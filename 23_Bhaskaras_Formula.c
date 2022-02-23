#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,R1,R2;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    R1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    R2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    if(a==0 || a*c>b*b){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    return 0;
}