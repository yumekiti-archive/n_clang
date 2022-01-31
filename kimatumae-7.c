#include<stdio.h>

void question_1(){
    // 宣言
    char num[3] = {'N', 'I', 'W'};
    int i = 2;

    // 表示
    while(i >= 0){
        printf("%c", num[i]);
        i--;
    }
}

void question_2(){
    // 宣言
    int i, fact = 1;

    // 計算
    for(i = 1; i < 5; i++){
        fact = fact * i;
    }

    // 表示
    printf("N!=%d\n", fact);
}

void question_3(){
    // 宣言
    int i, j, a = 4, b = 3;

    // 表示
    for(i = 1; i <= a; i++){
        for(j = 1; j <= b; j++){
            printf("☆★");
        }
        printf("\n");
    }
}

int main()
{
    // 実行
    question_1();
    // 分かりやすいように改行
    printf("\n\n");

    // 実行
    question_2();
    // 分かりやすいように改行
    printf("\n\n");

    // 実行
    question_3();
    
    return 0;
}