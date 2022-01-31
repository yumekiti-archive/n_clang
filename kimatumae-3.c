#include <stdio.h>

int getTotal(int a, int b, int c);
int getMin(int a, int b, int c);

int main(void){
    int x, y, z, sum = 0, min = 0;
    float ave;

    printf("Input 3Number => \n");
    scanf("%d %d %d", &x, &y, &z);

    sum = getTotal(x, y, z);
    min = getMin(x, y, z);
    ave = (float)sum / 3.0;

    printf("合計は%d、最小値は%d、平均は%.3f", sum, min, ave);

    return 0;
}

int getTotal(int a, int b, int c){
    return a + b + c;
}

int getMin(int a, int b, int c){
    int m;

    m = a;

    if(b < m){
        m = b;
    }
    if(c < m){
        m = c;
    }

    return m;
}