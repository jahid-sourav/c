#include <stdio.h>
int main(){
int year, isLeapYear;
printf("Enter Your Year: ");
scanf("%d", &year);
if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    isLeapYear = 1;
}else{
isLeapYear = 0;
}

switch(isLeapYear){
case 1 :
    printf("%d is a Leap Year.\n", year);
    break;

case 0 :
    printf("%d is not a Leap Year.\n", year);
    break;

default:
    printf("Error!");
}


return 0;
}
