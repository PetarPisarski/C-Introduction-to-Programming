#include <stdio.h>

int main() {

    int numberOne = 0;
    int numberTwo = 0;

    puts("Enter your first Number: ");
    scanf("%d", &numberOne);

    puts("Enter your second Number: ");
    scanf("%d", &numberTwo);

    int minNumber = (numberOne < numberTwo) ? numberOne : numberTwo;
    int maxNumber = (numberOne > numberTwo) ? numberOne : numberTwo;

    /*
    IF I CANNOT USE ternary operator

    minNumber = (numberOne < numberTwo) * numberOne + (numberOne >= numberTwo) * numberTwo;
    maxNumber = (numberOne > numberTwo) * numberOne + (numberOne <= numberTwo) * numberTwo;
    */

    printf("The min number is: %d\n", minNumber);
    printf("The max number is: %d\n", maxNumber);

    return 0;
}