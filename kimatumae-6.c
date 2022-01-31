#include<stdio.h>

int main()
{
    // 宣言
    int i, j, total = 0;
    int matrix[2][4] = {
        {3, 7, 2, 1},
        {6, 8, 9, 4}
    };

    // for文での合計計算
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            total += matrix[i][j];
        }
    }

    // 合計表示
    printf("Total = %d\n", total);

    // 合計初期化
    total = 0;

    // while文での合計計算
    i = 0;
    while(i < 2){
        j = 0;
        while(j < 4){
            total += matrix[i][j];
            j++;
        }
        i++;
    }
    
    // 合計表示
    printf("Total = %d\n", total);

    return 0;
}
