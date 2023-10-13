#include "stdio.h"
int main (){
int f=0;
int e=0;
int g=0;

char h=0;

    printf("Enter first number=");
    scanf("%d",&f);
    printf("Enter second number=");
    scanf("%d",&e);
    printf(" Numbers are %d and %d\n",f,e);
    printf("Enter + to add\n");
    printf("Enter - to minus\n");
    printf("Enter * to multiply\n");
    printf("Enter /  to division\n");
    scanf(" %c",&h);

    switch (h) {

        case '+':

            g=f+e;

            printf("Answer=%d",g);
            break;

        case '-':

            g=f-e;

           printf("Answer=%d",g);
            break;

        case '*':

            g=f*e;

           printf("Answer=%d",g);
            break;
        default:

            g=f/e;

            printf("Answer=%d",g);
            break;
    }


    return 0;

}


