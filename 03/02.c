#include <stdio.h>
int main (){

for(int i = 0; i < 100; i++){
    printf("%d\t", i+1);
}

printf("\n-----------------------------------------\n");

int i = 0;
while(i < 100){
    printf("%d\t", i+1);
    i++;
}

printf("\n-----------------------------------------\n");

int a = 0;
do{
    printf("%d\t", a + 1);
    a++;
}while(a < 100);

printf("\n-----------------------------------------\n");

for(int i = 2; i <= 100; i+=2){
    printf("%d\t", i);
}
printf("\n-----------------------------------------\n");

for(int i = 1; i <= 10; i++){
    printf("%d\t", i*i);
}
printf("\n-----------------------------------------\n");

for(int i = 1; i <= 10; i++){
    printf("%d\t", i*i*i);
}
printf("\n-----------------------------------------\n");

return 0;
}
