//To find nCr using function
#include<stdio.h>

int factorial(int m) {
    int i, fact;
    fact = 1;
    for (i=1;i<=m;i++) {
        fact = fact * i;
    }
    return fact;
}
int CalcnCr(int n, int r) {
   int fact1, fact2, fact3, nCr;
   fact1 = factorial(n);
   fact2 = factorial(r);
   fact3 = factorial(n - r);
   nCr = fact1 /(fact2*fact3);
   return nCr;
}
int main() {
    int n, r;
    printf("In the form of nCr input the value of n and r respectively: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d = %d", n, r, CalcnCr(n,r));
    return 0;
}