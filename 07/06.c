#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter a string (up to 50 characters): ");
    gets(str);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    printf("Characters in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
