#include<stdio.h>
#define MAX 10

int main() {
    int step, i , n, temp, j, value, //a[MAX];
    //printf("Enter 10 values: ");   //To take input from the user in an array
    // for (j = 0;j < MAX; j++) {
    //     scanf("%d", &value);
    //     a[j] = value;
    // }
    a[MAX] = {10,45,2,23,67,5,6,8,9,4};
    n = sizeof(a) / sizeof(a[0]);    //Start of Bubble Short method
    for (step = 1;step <= n;step++) {
        for (i = 0;i < n - step;i++) {
            if (a[i] > a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = step;
            }
        }
     }
    printf("The sorted array\n");
    for (i = 0;i < n; i++) {
        printf("%d,", a[i]);
    }
    return 0;
}