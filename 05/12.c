#include <stdio.h>
void printSum(int n){
int sum = 0;
while(n != 0){
    sum += n % 10;
    n /= 10;
}
printf("Sum of digits of %d is: %d\n", n, sum);
}

int main (){
printSum(12345);
return 0;
}
