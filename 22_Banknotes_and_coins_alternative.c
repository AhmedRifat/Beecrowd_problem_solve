#include <stdio.h>
// without fmod function
int main()
{
    int inputValueInt = 0, floatPartInt = 0;
    double inputValue = 0, floatPart = 0;
    scanf("%lf", &inputValue);
    if (inputValue >= 0 && inputValue <= 1000000.00)
    {
        inputValueInt = inputValue;
        floatPart = inputValue - inputValueInt;
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", inputValueInt / 100);
        inputValueInt = inputValueInt % 100;
        printf("%d nota(s) de R$ 50.00\n", inputValueInt / 50);
        inputValueInt = inputValueInt % 50;
        printf("%d nota(s) de R$ 20.00\n", inputValueInt / 20);
        inputValueInt = inputValueInt % 20;
        printf("%d nota(s) de R$ 10.00\n", inputValueInt / 10);
        inputValueInt = inputValueInt % 10;
        printf("%d nota(s) de R$ 5.00\n", inputValueInt / 5);
        inputValueInt = inputValueInt % 5;
        printf("%d nota(s) de R$ 2.00\n", inputValueInt / 2);
        inputValueInt = inputValueInt % 2;
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", inputValueInt / 1);
        floatPartInt = floatPart * 100;
        printf("%d moeda(s) de R$ 0.50\n", floatPartInt / 50);
        floatPartInt = floatPartInt % 50;
        printf("%d moeda(s) de R$ 0.25\n", floatPartInt / 25);
        floatPartInt = floatPartInt % 25;
        printf("%d moeda(s) de R$ 0.10\n", floatPartInt / 10);
        floatPartInt = floatPartInt % 10;
        printf("%d moeda(s) de R$ 0.05\n", floatPartInt / 5);
        floatPartInt = floatPartInt % 5;
        printf("%d moeda(s) de R$ 0.01\n", floatPartInt / 1);
        return 0;
    }
}
