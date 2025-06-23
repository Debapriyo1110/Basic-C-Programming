//To input n numbers from user and display those
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter the numbers:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &num[i]);
    }
    printf("The entered numbers are: ");
    for (i=0;i<n;i++) {
        printf("%d\n", num[i]);
    }
    printf("\n");
    return 0;
}
