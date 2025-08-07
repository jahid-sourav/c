#include <stdio.h>
int main (){
char a,b;
printf("Enter 2 Characters : ");
scanf(" %c %c", &a, &b);
printf("You Entered %c and %c\n", a,b);
printf("The ASCII value of %c is: %d\n", a, a);
printf("The ASCII value of %c is: %d\n", b, b);
return 0;
}
