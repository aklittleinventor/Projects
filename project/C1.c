#include "stdio.h"
int main (){
    int a=0;
    int b=0;
    printf("Enter the number=");
    scanf("%d",&a);
    b=a%2;

    if(b==1){
        printf("Your number is odd");
    }else {
        printf("Your number is even");
    }

    return 0;
}