#include "stdio.h"
int main(){
    int a=0;
    int b=90;
    int c=70;
    int d=50;
    printf("Enter marks=");
    scanf("%d",&a);

    if (a==90 && a>90){
        printf("A grade");
    }else if(a>70 && a<50 && a==70){
        printf("B grade");
    } else if(a>50 && a<90 && a<70 && a==50){
        printf("C grade");
    }else{
        printf("D grade");
    }
    return 0;
}