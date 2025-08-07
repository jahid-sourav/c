#include <stdio.h>
void first10Odd(int numb){
printf("First 10 Odd Numbers are \n");
for(int i = 0; i < numb; i++){
    printf("%d\n", 2 * i + 1);
}
}

int main (){
    first10Odd(10);
return 0;
}
