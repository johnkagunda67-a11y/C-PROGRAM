#include <stdio.h>

#define PI 3.14
/* FIND THE VOLUME AND SURFACE AREA OF A CYLINDER
IN C PROGRAMMING */

int main()
{
    double radius = 0.00;
    double height = 0.00;
    double volume = 0.00;
    double surfaceArea = 0.00;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = PI * radius * radius * height;                            /* V = pi r^2 h */
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height; /* A = 2 pi r^2 + 2 pi r h */

    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);
    return 0;
}
