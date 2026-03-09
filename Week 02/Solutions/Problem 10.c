#include <stdio.h>

int main() {

    int year = 0;

    puts("Enter your year: \n");
    scanf("%d", &year);

    int condition1 = ((year % 4 == 0) && (year % 100 != 0));
    int condition2 = (year % 400 == 0);

    printf("Leap Year: %d\n", condition1 || condition2);

    return 0;
}