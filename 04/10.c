#include <stdio.h>
int main ()
{
    int month, year;
    printf("Enter The Month Number:(1-12) ");
    scanf("%d", &month);

    printf("Enter The Year: ");
    scanf("%d", &year);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days\n");
        break;

    case 2:
        if((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
        {
            printf("29 days (Leap Year)\n");
        }
        else
        {
            printf("28 days\n");
        }
        break;

    default :
        printf("Invalid month number!\n");

    }


    return 0;
}
