#include<stdio.h>

int main()
{
    int i, j, total = 0;
    int b[2][3] = {
        {20, 30, 40},
        {50, 60, 70},
    };

    // for
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            total += b[i][j];
        }
    }
    printf("%d\n", total);

    total = 0;

    // while
    i = 0;
    while(i < 2){
        j = 0;
        while(j < 3){
            total += b[i][j];
            j++;
        }
        i++;
    }
    printf("%d\n", total);

    return 0;
}
