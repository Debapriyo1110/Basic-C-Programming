#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int sum = 0;
    int count = 0;
    int num = 2; // Starting from the first prime number
    
    while (count < n) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("The sum of the first %d prime numbers is: %d\n", n, sum);

    return 0;
}