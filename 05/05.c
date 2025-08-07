#include <stdio.h>
void facto(int numb){
 int fac = 1;

for(int i = 1; i <= 5; i++){
    fac *= i;
}
printf("The Factorial of 5 is %d\n", fac);
}


int main(){
facto(5);

return 0;
}
