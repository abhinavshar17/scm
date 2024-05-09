#include <stdio.h>

int sumOfDigits(int n) {
    
    if (n < 10)
        return n;
    // Recursive case: add the last digit to the sum of digits of n/10
    else
        return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum  of %d is %d\n", n, sumOfDigits(n));
    return 0;
}
