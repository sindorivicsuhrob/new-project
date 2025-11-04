#include<stdio.h>
int main()
{//печаать таблицы температур по фаренгейту
    float fahr, cilsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;
//загловок таблицы
    printf("%3s %6s","F" , "C\n");
    printf("____________\n");

    fahr=lower;
    while (fahr <= upper)  {
        cilsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f°F %6.1f C\n",fahr,cilsius);
        fahr = fahr + step;
    }
    return 0;
}
