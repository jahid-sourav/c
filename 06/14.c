#include <stdio.h>
int main (){
int arr[5] ={1,2,3,4,5};
int isFound = 0;
int findNumb;

printf("Enter The Number, which you want to find: ");
scanf("%d", &findNumb);

for(int i = 0; i < 5; i++){
    if(arr[i] == findNumb){
        printf("Found and Index Number is : %d\n", i);
        isFound = 1;
        break;
    }
}

if(!isFound){
    printf("Not Found.");
}

return 0;
}
