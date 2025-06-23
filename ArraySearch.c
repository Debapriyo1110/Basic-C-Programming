//To input a list of numbers and search a particular number is present or not
#include <stdio.h>

int main() {
    int i, n, m, count;
    count = 0;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter the numbers:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &num[i]);
    }
    printf("Enter the number to find: ");
    scanf("%d", &m);

    for (i=1;i<n;i++) {
        if (num[i] == m) {
            count = 1;
            break;
        }
    }
    if (count == 1) 
        printf("Element found");
    else
        printf("Element not found");
    return 0;
}