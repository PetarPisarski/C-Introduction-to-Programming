#include <stdio.h>
#include <math.h>
/*
I know that functions are yet to be discussed but I used functions
in order the code to be useful in the future
*/

    void distanceInOneDimension();
    void distanceInTwoDimension();
    void distanceInThreeDimension();

int main() {

    distanceInOneDimension();
    distanceInTwoDimension();
    distanceInThreeDimension();

    return 0;
}

void distanceInOneDimension() {

    double x1 = 0.0;
    double x2 = 0.0;

    puts("Enter the coordinates of Point 1: \n");
    scanf("%lf", &x1);

    puts("Enter the coordinates of Point 2: \n");
    scanf("%lf", &x2);

    printf("The distance is: %lf\n", fabs(x1 - x2));

}

void distanceInTwoDimension() {

    double x1 = 0.0;
    double y1 = 0.0;

    double x2 = 0.0;
    double y2 = 0.0;


    puts("Enter the coordinates of Point 1: \n");
    scanf("%lf %lf", &x1, &y1);
    puts("Enter the coordinates of Point 2: \n");
    scanf("%lf %lf", &x2, &y2);


    printf("The distance is: %lf\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

void distanceInThreeDimension() {
    double x1 = 0.0;
    double y1 = 0.0;
    double z1 = 0.0;

    double x2 = 0.0;
    double y2 = 0.0;
    double z2 = 0.0;


    puts("Enter the coordinates of Point 1: \n");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    puts("Enter the coordinates of Point 2: \n");
    scanf("%lf %lf lf%", &x2, &y2, &z2);


    printf("The distance is: %lf\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2)));
}