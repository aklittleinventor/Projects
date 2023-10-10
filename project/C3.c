#include "stdio.h"
int main(){
    int a=0;
    int b=0;
    int c=0;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    printf("Enter third number=");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("First number is maximum.");
    }else if (b>a && b>c){
        printf("Second number is maximum.");
    } else if(c>a && c>b){
        printf("Third number is maximum.");
    }else if(a==b && a>c){
        printf("Both First and second numbers are maximum.");
    }else if (b==c && b>a){
        printf("Both Second and third numbers are maximum.");
    } else if(c==a && c>b){
        printf("Both Third and First numbers are maximum.");
    }

    else{
        printf("The three numbers are equal.");
    }
    return 0;
}
