#include <stdio.h>

int main() {
    int i, n, j;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=i;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}