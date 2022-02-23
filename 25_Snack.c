#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X==1){
        printf("Total: R$ %.2lf\n",((double)Y)*4.00);
    }
    else if(X==2){
        printf("Total: R$ %.2lf\n",((double)Y)*4.50);
    }
    else if(X==3){
        printf("Total: R$ %.2lf\n",((double)Y)*5.00);
    }
    else if(X==4){
        printf("Total: R$ %.2lf\n",((double)Y)*2.00);
    }
    else if(X==5){
        printf("Total: R$ %.2lf\n",((double)Y)*1.50);
    }
    return 0;
}
