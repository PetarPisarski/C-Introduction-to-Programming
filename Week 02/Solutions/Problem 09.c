#include <stdio.h>

int main() {

    int number;

    puts("Please enter your 4-digit number: ");
    scanf("%d", &number);

    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = number / 1000;

    int digitsSum = digit1 + digit2 + digit3 + digit4;
    int digitsProduct = digit1 * digit2 * digit3 * digit4;

    printf("The SUM of the digits is: %d\n", digitsSum);
    printf("The PRODUCT of the digits is: %d\n", digitsProduct);

    return 0;
}