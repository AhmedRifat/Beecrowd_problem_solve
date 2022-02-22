#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,MaiorAB,Maior;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    MaiorAB=((a+b)+abs(a-b))/2;
    Maior=((MaiorAB+c)+abs(MaiorAB-c))/2;

    printf("%d eh o maior\n",Maior);


    // if((A>B && A>C) || (B>C && B>A) || (C>A && C>B)){
    //     printf("%d eh o maior\n");
    // }

    return 0;
}
