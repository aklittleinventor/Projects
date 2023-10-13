#include "stdio.h"

int main(){
    char ch;
    printf("Enter word");
    scanf(" %c",&ch);
    if (ch=='a'){
        printf("this word is vowel");
    }else if (ch=='e'){
        printf("this word is vowel");
    }else if (ch=='i'){
        printf("this word is vowel");
    }else if (ch=='o'){
        printf("this word is vowel");
    }else if (ch=='u'){
        printf("this word is vowel");
    }else {
        printf("this word is consonant");
    }
    return 0;
}