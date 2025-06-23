//Find the factorial of anumer using function
#include<stdio.h>

int calcfact(int n) {
    int fact, i;
    fact = 1;
    for (i = 1;i <= n;i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d", a, calcfact(a));
    return 0;
}