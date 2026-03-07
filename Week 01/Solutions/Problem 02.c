#include <stdio.h>

int main() {

    int number;
    
    puts("Please enter a number: \n");
    scanf("%d", &number);

    number = number + 1;

    printf("The SUCC result is: %d", number);

    return 0;
}