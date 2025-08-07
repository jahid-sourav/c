#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


int main()
{
    char a[100];
    printf("Enter The Text: ");
    gets(a);



    int vowel = 0, consonant = 0, i = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        if (isalpha(a[i]))
        {
            if (isVowel(a[i]))
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);

    return 0;
}
