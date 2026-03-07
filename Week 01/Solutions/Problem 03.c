#include <stdio.h>

int main() {

    int number;

    puts("Please enter a number: \n");
    scanf("%d", &number);

    number = number - 1;

    printf("The PRED result is: %d\n", number);

    return 0;
}