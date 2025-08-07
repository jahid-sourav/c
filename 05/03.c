#include <stdio.h>
void squareNumbers(int n){
    int result = n * n;
    printf("Square: %d\n", result);
}

int main () {
int x;
printf("Enter A Number for Square: ");
scanf("%d", &x);

squareNumbers(x);

return 0;
}
