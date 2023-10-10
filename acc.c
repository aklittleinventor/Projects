#include "stdio.h"
int a=0;
char na[20];
char un[20];
char pw[20];


int main (){
    printf("Enter 1 to Signup\n");
    printf("Enter 2 to login\n");
    printf("Enter 3 to Exit\n");
    scanf("%d",&a);

    if (a==1){
        printf("Enter your name=");
        scanf("%s\n",na);
        printf("Enter your username=");
        scanf("%s\n",un);
        printf("Enter your password=");
        scanf("%s\n",pw);
        printf("Signup Complete!!");
    } else  if(a==2){
        printf("Enter your username=");
        scanf("%s\n",un);
        printf("Enter your password=");
        scanf("%s\n",pw);
        printf("login Complete!!");
    }else {
        printf("Finally Exit!!");

    }

    return 0;
}