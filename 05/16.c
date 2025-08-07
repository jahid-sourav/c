#include <stdio.h>
int firstTenN(int x){
int sum = 0;
for(int i = 1; i <= x; i++){
    sum += i;
}
return sum;
}

int main (){
int n;
printf("Enter The Digit: ");
scanf("%d", &n);
printf("Result : %d\n", firstTenN(n));
return 0;
}
