#include <stdio.h>
int isPrimeReturn(int n){
if (n <= 1){
    return 0;
}
for(int i = 2; i <= n /2; i++){
 if(n % i == 0){
    return 0;
 }
}
return 1;
}

int main (){
int n;
printf("Enter A Number: ");
scanf("%d", &n);
if(isPrimeReturn(n)){
    printf("%d is a Prime Number\n", n);
}else{
    printf("%d is not a prime Number\n", n);
}
return 0;
}
