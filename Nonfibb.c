//To print non Fibonacci series
#include <stdio.h>
int main() {
    int n, f1, f2, f;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    f1 = 0;
    f2 = 1;
    f = f1 + f2;
    int count = 0;
    int num = 1; 
    while (count < n) {
        if (num != f) {
            printf("%d\n", num);
            count++;
        }
        num++;
        f1 = f2;
        f2 = f;
        f = f1 + f2;
        
    }
    return 0;
    }
