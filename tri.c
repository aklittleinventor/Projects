//
// Created by Ci Ci Computer on 10/10/2023.
//
#include "stdio.h"
int de=10;


int main() {
    for (int i = 1; i <= de / 2; i++) {
        printf(" ");


        for (int g = 0; g < de-i; g++) {
            printf(" ");

        }

        for (int y = 0; y < i * 2 -1; ++y) {
            printf("*");

        }
        for (int y = 0; y > i *2-11; --y) {
            printf(" ");

        }
        for (int y = 0; y < i * 2 -1; ++y) {
            printf("*");

        }
        for (int j = 0; j < de ; ++j) {
            printf(" ");


        }

        printf("\n");
    }

    for (int i = 1; i <= de / 2; i++) {
        printf(" ");


        for (int g = 0; g < de+i-6; g++) {
            printf(" ");

        }

        for (int y = 0; y > i *2-11; --y) {
            printf("*");

        }
        for (int y = 0; y < i * 2 -1; ++y) {
            printf(" ");

        }
        for (int y = 0; y > i *2-11; --y) {
            printf("*");

        }
        for (int j = 0; j < de ; ++j) {
            printf(" ");


        }

        printf("\n");
    }


    return 0;
}