#include <stdio.h>
int main (){
int age, citizenship;
printf("Enter Your Age and Citizenship Status (0 for Non-Citizen, 1 for Citizen) :");
scanf("%d %d", &age, &citizenship);
if(age >= 18 && citizenship == 1){
    printf("Eligible to Vote!");
}else{
    printf("Not Eligible to Vote!");
}

return 0;
}
