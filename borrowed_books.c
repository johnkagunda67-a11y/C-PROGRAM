#include <stdio.h>
#include <string.h>

int main()
{
    char title[200];
    FILE *fp = fopen("borrowed_books.txt", "old"); /* "old" keeps old records */

    if (fp == NULL)
    {
        printf("Error: could not open file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    fprintf(fp, "%s\n", title);
    fclose(fp);
    printf("Title \"%s\" stored successfully.\n", title);
    return 0;
}
