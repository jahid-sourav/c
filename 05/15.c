#include <stdio.h>
int fact(int x){
int result = 1;
for(int i = 1; i <= x; i++){
    result *= i;
}
return result;
}

int main (){
int n;
printf("Enter A Number for Factorial: ");
scanf("%d", &n);
printf("Result is %d\n", fact(n));
return 0;
}
