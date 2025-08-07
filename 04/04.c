#include <stdio.h>
int main (){
char input;
printf("Enter Your Gender M/m for Male and F/f for Female: ");
scanf(" %c", &input);

switch(input){
case 'M':
case 'm':
    printf("You are Male.\n");
    break;

case 'f':
case 'F':
    printf("You are Female\n");
    break;

default:
    printf("Error!");
}

return 0;
}
