#include <stdio.h>
int main(){
int arr[5];
printf("Enter 5 Elements: ");
for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
}
int largest = arr[0];

for(int i= 1; i < 5; i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
}
printf("The Largest value is %d\n", largest);

return 0;
}
