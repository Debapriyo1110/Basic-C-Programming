//Goldbach Conjecture
#include<stdio.h>
int main() {
    int i, j, k, d, n;
    printf("Enter a number greater than 2 : ");
    scanf("%d", &n);
    for (i=1;i<=n/2;i++) {
        int count = 0;
        for (j=1;j<=i;j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2) {
            d = n - i;
            int count1 = 0;
            for (k=1;k<=d;k++) {
                if (d % k == 0)
                    count1++;
            }
            if (count1 == 2) 
                printf("%d = %d + %d\n", n, i, d);
        }
    }
    return 0;
}