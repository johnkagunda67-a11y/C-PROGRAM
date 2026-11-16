// DAILY SALES TRANSACTIONS IN C
#include <stdio.h>

int main()
{
    double amount = 0;
    double total = 0;
    FILE *fp = fopen("sales.txt", "r");

    if (fp == NULL)
    {
        printf("Error: sales.txt not found.\n");
        return 1;
    }

    while (fscanf(fp, "%lf", &amount) == 1)
        total += amount;

    fclose(fp); /* close the file after reading */
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}
