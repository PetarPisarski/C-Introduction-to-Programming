#include <stdio.h>
#include <math.h>

int main () {

    double numberOne;
    double numberTwo;
    double numberThree;

    puts("Please enter the first number: ");
    scanf("%lf", &numberOne);

    puts("Please enter the second number: ");
    scanf("%lf", &numberTwo);

    puts("Please enter the third number: ");
    scanf("%lf", &numberThree);

    double arithmeticMean = (numberOne + numberTwo + numberThree) / 3;
    double geometricMean = cbrt(numberOne * numberTwo * numberThree);
    double harmonicMean = 3.0/ ((1.0 / numberOne) + (1.0 / numberTwo) + (1.0 / numberThree));
    double quadraticMean = sqrt((pow(numberOne, 2) + pow(numberTwo, 2) + pow(numberThree, 2))/3.0);

    printf("The arithmetic mean is: %lf\n", arithmeticMean);
    printf("The geometric mean is: %lf\n", geometricMean);
    printf("The harmonic mean is: %lf\n", harmonicMean);
    printf("The quadratic mean is: %lf\n", quadraticMean);

    return 0;
}