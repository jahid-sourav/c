#include <stdio.h>
void sumFunc(int numb){
int sum = 0;
for(int i = 1; i <= 10; i++){
    sum += i;
}
printf("%d is the sum result", sum);
}
int main (){
sumFunc(10);
return 0;
}
