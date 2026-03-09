#include <stdio.h>

int main() {

    double  X   =   0.0;
    double  Y   =   0.0;

    puts("Enter your X: \n");
    scanf("%lf", &X);
    puts("Enter your Y: \n");
    scanf("%lf", &Y);


    double partOne = (X * X) / (Y * Y - 1);
    double partTwo = (Y * Y) / (X * X - 1);
    double partThree = 1 / (X * X + Y * Y);
    double partFour = 1 / (X * X - Y * Y);


    double result = (partOne + partTwo + partThree) / partFour;

    printf("The result is: %lf\n", result);

    return 0;
}