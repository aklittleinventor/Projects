#include "stdio.h"
int a=0;
int b=0;
int c=0;
int d=0;
int main (){

    printf("Enter Hours=");
    scanf("%d",&a);
    printf("Enter minutes=");
    scanf("%d",&b);
    printf("Enter seconds=");
    scanf("%d",&c);
    (d=(a*3600)+(b*60)+c);
    printf("Total time=%dseconds",d);

    return 0;

}