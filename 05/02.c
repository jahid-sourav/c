#include <stdio.h>
void sumFunc(int a, int b) {
    int sum = (a+b);
    printf("Sum = %d", sum);
}

int main(){
int x, y;
printf("Enter 2 Numbers: ");
scanf("%d %d", &x, &y);
sumFunc(x,y);

return 0;
}
