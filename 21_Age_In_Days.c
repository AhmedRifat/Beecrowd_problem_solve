#include<stdio.h>

int main()
{
    int age; //400
    scanf("%d",&age);
    printf("%d ano(s)\n",age/365); //this shows year
    age%=365;
    printf("%d mes(es)\n",age/30);
    age%=30;
    printf("%d dia(s)\n",age);
    return 0;
}
