#include <stdio.h>
int twoSum(int a, int b){
int result = a + b;
return result;
}

int main (){
int x, y;
printf("Enter 2 Numbers: ");
scanf("%d %d", &x, &y);
printf("Result : %d\n", twoSum(x, y));
return 0;
}
