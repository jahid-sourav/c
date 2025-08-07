#include <stdio.h>
int main (){
int celsius;
float fahrenheit;
printf("Enter the Celsius: ");
scanf("%d", &celsius);

fahrenheit = (celsius * 9/5) + 32;

printf("Fahrenheit = %.2f", fahrenheit);

return 0;
}
