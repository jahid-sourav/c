#include <stdio.h>
int main (){
int numb;
printf("Enter A Number : ");
scanf("%d", &numb);

if(numb % 2 == 0){
    printf("%d number is Even\n", numb);
}else{
printf("%d number is Odd\n", numb);
}

return 0;
}
