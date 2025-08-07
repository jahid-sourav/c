#include <stdio.h>
int main (){
int input;
printf("Enter Any Number: ");
scanf("%d", &input);

switch(input % 2){
case 0 :
    printf("Your number is %d and This is an Even Number.", input);
    break;
case 1 :
    printf("Your number is %d and This is an Odd Number.", input);
    break;

default :
    printf("Error!");

}

return 0;
}
