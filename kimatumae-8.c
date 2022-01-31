#include<stdio.h>

int getTotal(int a, int b, int c);
int getMax(int a, int b, int c);

int main()
{
    // 宣言
    int x, y, z, sum = 0, max;
    float ave;

    // 入力
    printf("Input 3Number => \n");
    scanf("%d%d%d", &x, &y, &z);

    // 計算
    sum = getTotal(x, y, z);
    max = getMax(x, y, z);
    ave = (float)sum / 3.0;

    // 表示
    printf("合計は %d 、最大は %d 、平均は%.3f\n", sum, max, ave);

    return 0;
}

// 合計計算関数
int getTotal(int a, int b, int c){
    return a + b + c;
}

// 最大取得関数
int getMax(int a, int b, int c){
    int m;

    m = a;

    if(b > m){
        m = b;
    }
    if(c > m){
        m = c;
    }

    return m;
}