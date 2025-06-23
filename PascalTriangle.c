//To Print Pascal Triangle
#include<stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
}

int comb(int n, int r) {
    return fact(n)/(fact(r) * fact(n - r));
}

int PascalTriangle (int r) {
    int i, j, k;
    for (i = 0; i < r; i++) {
        for (j = 0; j < r - i - 1; j++)
            printf(" ");
        for (k = 0; k <= i; k++) {
            printf("%d ", comb(i, k));
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    PascalTriangle(m);
    return 0;
}