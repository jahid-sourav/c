#include <stdio.h>
int main (){
char color;
printf("Enter The Color Name: ");

scanf(" %c", &color);

switch(color){
case 'r':
case 'R':
    printf("Stop");
    break;

case 'g':
case 'G':
    printf("Go");
    break;

case 'y':
case 'Y':
    printf("Caution");
    break;

default :
    printf("Error!");
}

return 0;
}
