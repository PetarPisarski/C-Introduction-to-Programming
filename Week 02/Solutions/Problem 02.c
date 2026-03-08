#include <stdio.h>

int main() {

    int number;
    float numberFloat;
    double numberDouble;

    char character;

    scanf("%d %f %lf %c", &number, &numberFloat, &numberDouble, &character);

    printf("the int is = %d | the float is = %0.2f | the double is = %lf | the char is = %c", number, numberFloat, numberDouble, character);

    return 0;
}