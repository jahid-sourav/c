#include <stdio.h>
int main (){
int age;
printf("Enter Your Age: ");
scanf("%d", &age);

if(age < 0) {
    printf("Error");
}else{
if(age <= 12){
    printf("Child");
}else if(age <= 19){
printf("Teenager");
}else if(age <= 64){
    printf("Adult");
}else if(age >= 65){
printf("Senior");
}
}

return 0;
}
