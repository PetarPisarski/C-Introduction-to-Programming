#include <stdio.h>

int main() {

    int numberOne =   0;
    int numberTwo =   0;
    int numberThree =   0;


    puts("Enter the Number 1: ");
    scanf("%d", &numberOne);

    puts("Enter the Number 2: ");
    scanf("%d", &numberTwo);

    puts("Enter the Number 3: ");
    scanf("%d", &numberThree);


    int countPositive = (numberOne > 0) + (numberTwo > 0) + (numberThree > 0);
    int countNegative = (numberOne < 0) + (numberTwo < 0) + (numberThree < 0);

    printf("The count of the positive numbers is: %d\n",    countPositive);
    printf("The count of the negative numbers is: %d\n",    countNegative);

    return 0;
}