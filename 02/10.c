#include <stdio.h>
int main () {
int year;
printf("Enter Your Year: ");
scanf("%d", &year);
(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ?
    printf("%d is a Leap Year\n", year) :
    printf("%d is not a Leap Year\n", year);

return 0;
}
