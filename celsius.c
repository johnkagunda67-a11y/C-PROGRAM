// FAHRENHEIT TO CELSIUS CONVERSION IN C
#include <stdio.h>

double convertToCelsius(double fahrenheit)
{
    return ((fahrenheit - 32) * 5.0 / 9.0);
}

int main()
{
    double f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    printf("Answer: %.1f C\n", convertToCelsius(f));
    return 0;
}
