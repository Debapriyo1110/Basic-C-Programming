//To print Y using 'star'(*)
#include<stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i=0;i < n/2;i++) {
        for (j=0;j < n;j++) {
            if (j == i || i + j == n - 1)
                printf("*");
            else
                printf(" ");}
        printf("\n");}
    for (i=n/2;i < n;i++) {
        for (j=0;j < n;j++) {
            if (j == n/2)
                printf("*");
            else
                printf(" ");}
        printf("\n");}
    return 0;}
