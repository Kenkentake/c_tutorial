#include <stdio.h>
/*
 変数を用いた計算
 */

void main()
{
    // 使用する変数の定義
    int a;
    int b = 3;
    int add, sub;
    double avg;
    a = 6;
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0;
    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%dと%dの平均値:%f\n",a,b,avg);
}
