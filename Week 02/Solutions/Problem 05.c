#include <stdio.h>

int main() {

    float radius;
    const float PI = 3.141593;

    puts("Enter the radius of your cicle: ");
    scanf("%f", &radius);

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("The circumference of the circle is: %0.2lf\n", circumference);
    printf("The area of the circle is: %0.2lf\n", area);


    return 0;
}