#include "stdio.h"
int main (){
    int start_point=0;
    int end_point=0;
    int total=0;

    printf("Enter start point=");
    scanf("%d",&start_point);
    printf("Enter end point=");
    scanf("%d",&end_point);
    for (int i = start_point; i <= end_point; ++i) {
        if(i%2==1){
            printf("%d ",i);
        }

    }

    return 0;
}