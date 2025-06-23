#include<stdio.h>


int main () {
    int i, j, r, k;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
    for (i = 0; i < r; i++) {
        for (j = 0;i + j < r - 1; j++)
            printf(" ");
        for (k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
