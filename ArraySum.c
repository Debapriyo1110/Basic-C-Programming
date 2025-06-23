//To input n numbers and find their sum
#include <stdio.h>

int main() {
    int i, n, sum;
    sum = 0;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter the numbers:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &num[i]);
    }
    for (i=0;i<n;i++) {
        sum =sum + num[i];
    }
    printf("The required sum is %d", sum);
    return 0;
}