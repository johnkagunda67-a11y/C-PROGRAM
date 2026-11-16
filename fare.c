#include <stdio.h>

#define RATE_PER_KM 50

double calculateFare(double distance)
{
    return distance * RATE_PER_KM;
}

int main(void)
{
    double distance;
    printf("Enter distance travelled (km): ");
    scanf("%lf", &distance);
    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}
