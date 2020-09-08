#include <stdio.h>

void main(){
    double d[3] = { 0.2, 0.4, 0.6 };
    double *p1 = NULL, *p2 = NULL, *p3 = NULL;
    int i;
    p1 = d;
    p2 = d;
    p3 = d;
    for(i = 0; i < 3; i++){
        printf("%f %f %f %f\n",*(d+i),p1[i],*p2,*p3);
        p2++;
        p3 = p3 + 1;
    }
}
