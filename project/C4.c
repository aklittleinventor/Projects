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

    if(a>b && a<c){
        printf("First number is secondmaximum.");
    }else if (b>a && b<c){
        printf("Second number is secondmaximum.");
    } else if(c>a && c<b){
        printf("Third number is secondmaximum.");
    }else  if(a<b && a>c){
        printf("First number is secondmaximum.");
    }else if (b<a && b>c){
        printf("Second number is secondmaximum.");
    } else if(c<a && c>b){
        printf("Third number is secondmaximum.");
    }else if(a==b && a>c){
        printf("Third number is secondmaximum.");
    }else if (b==c && b>a){
        printf("First number is secondmaximum.");
    } else if(c==a && c>b){
        printf("Second number is secondmaximum.");
    }else if(a==b && a<c){
        printf("Both First and second numbers are secondmaximum.");
    }else if (b==c && b<a){
        printf("Both Second and third numbers are secondmaximum.");
    } else if(c==a && c<b){
        printf("Both Third and First numbers are secondmaximum.");
    }

    else{
        printf("The three numbers are equal.");
    }

    return 0;
}