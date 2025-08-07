#include <stdio.h>
int main (){
char input;
printf("Enter Your Character: ");
scanf(" %c", &input);

switch(input){
case 'a':
case 'A':
case 'e':
case 'E':
case 'I':
case 'i':
case 'O':
case 'o':
case 'u':
case 'U':
    printf("Your %c is VOWEL\n", input);
    break;

default:
    printf("%c is CONSONANT\n", input);
}

return 0;
}
