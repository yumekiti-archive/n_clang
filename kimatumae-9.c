#include <stdio.h>
#define N 3

float iFact(int n);
float iSqua(int n);
float iDiv(int n);

int main()
{
    // 変数宣言
    float f, s, d;

    // 変数fに関数iFactで計算した値を入れる
    f = iFact(N);

    // 変数sに関数iSquaで計算した値を入れる
    s = iSqua(N);

    // 変数dに関数iDivで計算した値を入れる
    d = iDiv(N);

    // 結果を表示(6.000000 / 9.000000 + 0.333333)
    printf("Answer-> %f\n", f / s + d);

    return 0;
}

float iFact(int n)
{
    // 宣言
    int i, m = 1;

    // 計算(1 * 1 + 1 * 2 + 1 * 3)
    for (i = 1; i <= n; i++) {
        m *= i;
    }

    return (float)m;
}

float iSqua(int n)
{
    // 計算(3 * 3)
    return (float)n * n;
}

float iDiv(int n)
{
    // 計算(1 / 3)
    return (float)1 / n;
}