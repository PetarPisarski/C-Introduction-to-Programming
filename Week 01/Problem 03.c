#include <stdio.h>

int main() {

    int number;

    puts("Please enter a number: \n");
    scanf("%d", &number);

    number = number - 1;

    printf("Your number -1 is equal to %d\n", number);

    return 0;
}