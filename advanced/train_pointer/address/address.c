#include <stdio.h>

void main(){
    int a = 100;
    double b = 123.4f;
    float c = 123.4f;
    char d = 'a';
    printf("aの値は%d,大きさは%dbyte,アドレスは0x%x\n",a,sizeof(int),&a);
    printf("bの値は%d,大きさは%dbyte,アドレスは0x%x\n",b,sizeof(float),&b);
    printf("cの値は%d,大きさは%dbyte,アドレスは0x%x\n",c,sizeof(float),&c);
    printf("dの値は%d,大きさは%dbyte,アドレスは0x%x\n",d,sizeof(char),&d);
}
