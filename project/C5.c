#include "stdio.h"
int main(){
    int a=0;
    int b=90;
    int c=70;
    int d=50;
    printf("Enter marks=");
    scanf("%d",&a);

    if (a==b && a>b){
        printf("A grade");
    }else if(a>c && a<d && a==c){
        printf("B grade");
    } else if(a>d && a<b && a<c && a==d){
        printf("C grade");
    }else{
        printf("D grade");
    }
    return 0;
}