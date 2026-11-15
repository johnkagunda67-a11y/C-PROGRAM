#include <stdio.h>

int main()
{
    float height;
    double balance;
    char phone[12];

    printf("Enter your height ( meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (Ksh): ");
    scanf("%lf", &balance);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("\n--- Your Details ---\n");
    printf("Height        : %.2f m\n", height);
    printf("Bank balance  : KES %.2f\n", balance);
    printf("Phone number  : %s\n", phone);
    return 0;
}
