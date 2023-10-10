#include "stdio.h"
int main(){
    int a=0;
    int b=0;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    if(a>b){
        printf("First number is maximum.");
    }else if (a<b){
        printf("Second number is maximum.");
    }else{
        printf("The two numbers are equal.");
    }
    return 0;
}