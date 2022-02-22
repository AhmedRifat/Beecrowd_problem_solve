#include<stdio.h>

int main()
{
    int N,Nhour,Nmin,Nsec,NhourRmndr,NminRmndr;//556
    scanf("%d",&N);
    Nhour=N/(60*60);
    NhourRmndr=N%(60*60);

    Nmin=NhourRmndr/60;
    NminRmndr=NhourRmndr%60;

    Nsec=NminRmndr;

    
    printf("%d:%d:%d\n",Nhour,Nmin,Nsec);

    return 0;
}
