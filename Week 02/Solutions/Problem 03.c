#include <stdio.h>

int main() {

    int numberOne = 13;
    int numberTwo = 15;

    printf("The numbers before the switch: %d|%d\n", numberOne, numberTwo);


    int tempNumber = numberOne;
    numberOne = numberTwo;
    numberTwo = tempNumber;

    printf("The numbers after the switch: %d|%d\n\n", numberOne, numberTwo);

    //Without a third variable:

    puts("The switch without a third variable:\n");

    int firstNumber;
    int secondNumber;

    printf("The numbers before the switch: %d|%d\n", firstNumber, secondNumber);

    firstNumber = secondNumber + firstNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    printf("The numbers after the switch: %d|%d\n", firstNumber, secondNumber);

    return 0;
}