#include <stdio.h>
/*O-30 UNITS = 20 KES/unit
 * 31-60 UNITS = 25 KES/unit
 * ABOVE 60 UNITS = 30 KES/unit
 */
int main(void)
{
    int units;
    double bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30)
        bill = units * 20;
    else if (units <= 60)
        bill = (30 * 20) + ((units - 30) * 25);
    else
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);

    printf("Total water bill: %.2f KES\n", bill);
    return 0;
}
