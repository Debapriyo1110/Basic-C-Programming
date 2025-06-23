#include<stdio.h>

int main() {
    int i, j, r, k;
    for (i = 0; i < r; i++) {
        for (j = 0; j < r - i - 1; j++)
            printf(" ");
        for (k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}