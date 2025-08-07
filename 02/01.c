#include <stdio.h>
int main (){
int a, b;
printf("Enter 2 Numbers: ");
scanf("%d %d", &a, &b);
printf("Sum = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %d\nModulus = %d\n", a+b, a-b, a*b, a/b, a%b);

return 0;
}
