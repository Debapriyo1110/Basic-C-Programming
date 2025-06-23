//To find the biggest of n input numbers and find its position
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
    int max = num[0];
    int count = 0;
    for (i=1;i<n;i++) {
        if (num[i] > max) {
            max = num[i];
            count = i;
        }
    }
    printf("The biggest number is %d and its position is %d", max, count + 1);
    return 0;
}