#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Menu Function
void menu()
{
    printf("\n---------------Menu---------------\n");
    printf("1. Read and write a single word\n");
    printf("2. Read and write a full sentence\n");
    printf("3. Calculate the length of a string\n");
    printf("4. Reverse a given string\n");
    printf("5. Compare two strings\n");
    printf("6. Print string characters one by one\n");
    printf("7. Count alphabets, digits, spaces & special characters\n");
    printf("8. Count vowels and consonants\n");
    printf("0. Exit\n");
}

// 1. Single word input/output
void singleWord()
{
    char a[50];
    printf("Enter a word: ");
    scanf("%s", a);
    printf("Given word is: %s\n", a);
}

// 2. Full sentence input/output
void fullSentence()
{
    char a[100];
    gets(a);
    puts(a);
}

// 3. Calculate string length
void stringLength()
{
    char a[50];
    printf("Enter 50 Words String: ");
    gets(a);
    int length = strlen(a);
    printf("Length is %d", length);
}

// 4. Reverse string
void reverseString()
{
    char a[50];
    printf("Enter The Word: ");
    gets(a);
    printf("Reverse The word : %s\n", strrev(a));
}

// 5. Compare strings
void compareStrings()
{
    char a[50];
    char b[50];

    printf("Enter First Word: ");
    gets(a);
    printf("Enter Second Word: ");
    gets(b);

    if(strcmp(a,b) == 0)
    {
        printf("The strings are identical.\n");
    }
    else
    {
        printf("The strings are not identical.\n");
    }
}

// 6. Print characters one by one
void printCharacters()
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
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

}

// 7. Count alphabets, digits, spaces, and special characters
void countCharTypes()
{
    char a[100];
    int al = 0, di = 0, spaces = 0, sc = 0, i = 0;

    printf("Enter Your Text: ");
    gets(a);

    while(a[i] != '\0')
    {
        if(isalpha(a[i]))
        {
            al++;
        }
        else if(isdigit(a[i]))
        {
            di++;
        }
        else if(isspace(a[i]))
        {
            spaces++;
        }
        else
        {
            sc++;
        }
        i++;
    }
    printf("Alphabets: %d\nDigits: %d\nSpaces: %d\nSpecial Character: %d\n", al, di, spaces, sc);
}

// 8. Count vowels and consonants
int isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsConsonants()
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
}

// Main Function
int main()
{
    int choice;

    while (1)
    {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            singleWord();
            break;
        case 2:
            fullSentence();
            break;
        case 3:
            stringLength();
            break;
        case 4:
            reverseString();
            break;
        case 5:
            compareStrings();
            break;
        case 6:
            printCharacters();
            break;
        case 7:
            countCharTypes();
            break;
        case 8:
            countVowelsConsonants();
            break;
        case 0:
            printf("Exiting the program...\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
