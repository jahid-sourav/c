#include <stdio.h>
int main  () {
int a,b;
char option;
printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter (+, -, *, /, %%): ");
    scanf(" %c", &option);

    printf("Enter Second Number: ");
    scanf("%d", &b);

switch(option){
case '+' :
    printf("%d\n", a + b);
    break;

case '-' :
    printf("%d\n", a - b);
    break;

case '*' :
    printf("%d\n", a * b);
    break;

case '/' :
    printf("%d\n", a / b);
    break;

case '%' :
    printf("%d\n", a % b);
    break;

default :
    printf("Error!");
}

return 0;
}
