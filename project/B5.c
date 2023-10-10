#include "stdio.h"
int a=0;
int b=0;
int c=0;
int main (){
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    (c=a);
    (a=b);
    (b=c);
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}