#include <stdio.h>
void firstTenEven(int numb){
    printf("First 10 Even Numbers are : \n");
    for(int i = 1; i <= numb; i++){
        printf("%d\n", 2 * i);
    }

}

int main(){
    firstTenEven(10);
return 0;
}
