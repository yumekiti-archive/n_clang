#include<stdio.h>

int main()
{
    // 変数宣言
    int data[] = {10, 13, 22, 17, 5};
    int i, j;
    int work;

    // ソート
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (data[i] > data[j]) {
                work = data[i];
                data[i] = data[j];
                data[j] = work;
            }
        }
    }

    // 表示
    for (i=0; i < 5; ++i)
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}
