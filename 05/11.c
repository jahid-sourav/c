#include <stdio.h>
void isPrime(int numb){
int flag = 1;
if(numb <= 1){
    flag = 0;
}else{
for(int i = 2; i <= numb / 2; i++){
    if(numb % i == 0){
        flag = 0;
        break;
    }
}
if(flag){
    printf("%d is Prime Number\n", numb);
}else{
printf("%d is not a Prime Number\n", numb);
}
}

}


int main (){
int n;
printf("Enter a Number: ");
scanf("%d", &n);
isPrime(n);

return 0;
}
