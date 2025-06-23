#include<stdio.h>

int main() {
    int n, i, r, small, GCD, m;
    printf("Enter the value of m and n respectively: ");
    scanf("%d %d", &m, &n);
    small = (m>n) ? m :n ;
    for (i=1;i<=small;i++) {
        if (m%i == 0 && n%i == 0)
            GCD = i;
    }
    printf("GCD of %d and %d is %d",m,n,GCD);
    return 0;
}