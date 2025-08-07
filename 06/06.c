#include <stdio.h>
int main(){
int size;
printf("Enter The Size of The Array: ");
scanf("%d", &size);
int arr[size];
printf("Enter The Elements: ");

for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
}
int positive = 0;
int negative = 0;

for(int i = 0; i < size; i++){
    if(arr[i] < 0){
        negative++;
    }else if(arr[i] > 0){
    positive++;
    }
}

printf("Positive Numbers are %d and The Negative Numbers are %d\n", positive, negative);

return 0;
}
