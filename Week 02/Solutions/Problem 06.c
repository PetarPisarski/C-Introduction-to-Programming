#include <stdio.h>

int  main() {

    char letter;

    puts("Please enter the letter you want to transform into lowercase: \n");
    scanf("%c", &letter);

    printf("The letter you've entered in lowercase is: %c\n", letter + 32);

    return 0;
}