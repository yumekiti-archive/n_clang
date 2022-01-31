#include<stdio.h>

int main()
{
    double yoko, tate, men;

    printf("Input Yoko and Tate-> ");
    scanf("%lf %lf", &yoko, &tate);

    men = yoko * tate;

    printf("Menseki ha %3lf --- ", men);
    if(yoko == tate) printf("Square\n");
    else printf("Rectangle\n");

    return 0;
}
