#include<stdio.h>

int main()
{
    // 宣言
    double kion[7], total, ave, high, low;

    for(int i = 0; i < 7; i++){
        // 入力
        printf("%d 日目の気温を入れて下さい-> ", (i + 1));
        scanf("%lf", &kion[i]);
        
        // 合計計算
        total += kion[i];
    }

    high = kion[0];
    low = kion[0];

    for(int i = 0; i < 7; i++){
        // 最高取得
        if(kion[i] > high){
            high = kion[i];
        }

        // 最低取得
        if(kion[i] < low){
            low = kion[i];
        }
    }

    // 平均計算
    ave = (float)total / 7.0;

    // 表示
    printf("先週の平均気温は %.2lf ℃ 、最高気温は %.2lf ℃ 、最低気温は %.2lf ℃ です。\n", ave, high, low);

    return 0;
}
