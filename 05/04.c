#include <stdio.h>
void cubeFunc(int numb){
int result = numb * numb * numb;
printf("Cube is %d", result);
}

int main () {
int n;
printf("Enter a number for Cube: ");
scanf("%d", &n);

cubeFunc(n);

return 0;
}
