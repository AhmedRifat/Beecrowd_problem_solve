#include<stdio.h>

int main()
{
    int N;
    scanf("%i",&N);
    if(N>0 && N<1000000){
    printf("%i\n",N);
    
    printf("%i nota(s) de R$ 100,00\n",N/100);
    N%=100;
    printf("%i nota(s) de R$ 50,00\n",N/50);
    N%=50;
    printf("%i nota(s) de R$ 20,00\n",N/20);
    N%=20;
    printf("%i nota(s) de R$ 10,00\n",N/10);
    N%=10;
    printf("%i nota(s) de R$ 5,00\n",N/5);
    N%=5;
    printf("%i nota(s) de R$ 2,00\n",N/2);
    N%=2;
    printf("%i nota(s) de R$ 1,00\n",N/1);
    }
    return 0;
}
