// PASSWORD ENTRY PROGRAM IN C
#include <stdio.h>
#include <string.h>

int main()
{
    char input[50];

    do
    {
        printf("Enter password: ");
        scanf("%49s", input);
    } while (strcmp(input, "2026") != 0);

    printf("Access Granted\n");
    return 0;
}
