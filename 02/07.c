#include <stdio.h>
int main (){
int numb;
printf("Enter Your Marks (0-100): ");
scanf("%d", &numb);
if(numb < 0 || numb > 100){
    printf("Error!");
}else{
    if(numb <= 32){
        printf("Your Marks is %d and You have F Grade\n", numb);
    }else if(numb <= 39){
        printf("Your Marks is %d and You have D Grade\n", numb);
    }else if(numb <= 49){
        printf("Your Marks is %d and You have C Grade\n", numb);
    }else if(numb <= 59){
        printf("Your Marks is %d and You have B Grade\n", numb);
    }else if(numb <= 69){
        printf("Your Marks is %d and You have A- Grade\n", numb);
    }else if(numb <= 79){
        printf("Your Marks is %d and You have A Grade\n", numb);
    }else if(numb <= 100){
        printf("Your Marks is %d and You have A+ Grade\n", numb);
    }
}


return 0;
}
