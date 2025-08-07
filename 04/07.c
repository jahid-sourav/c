#include <stdio.h>
int main (){
char input;
int type;
printf("Enter Your Character: ");
scanf(" %c", &input);

if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
    type = 1;
}else if(input >= '0' && input <= '9'){
    type = 2;
}else{
    type = 3;
}

switch(type){
case 1 :
    printf("%c is an Alphabet\n", input);
    break;

case 2 :
    printf("%c is a Digit\n", input);
    break;

case 3 :
    printf("%c is a Special Character\n", input);


default:
    printf("Unknown!");
}

return 0;
}
