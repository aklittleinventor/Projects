#include "stdio.h"
int main(){
    int a=0;
    int b=90;
    int c=70;
    int d=50;
    printf("Enter marks=");
    scanf("%d",&a);

    printf("Your grade for %d is ",a);

    if (a<50){
        printf("D grade");
    }else if(a>70 && a<91 ){
        printf("B grade");
    } else
        if(a>50 && a<71 ){
        printf("C grade");
    }else{
        printf("A grade");
    }
    return 0;
}