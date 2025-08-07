#include <stdio.h>
int main(){
int size;
printf("Enter The Array Size: ");
scanf("%d", &size);
printf("Enter Array Elements: ");
int arr[size];
for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
}

int sum = 0;
for(int i = 0; i < size; i++){
    sum += arr[i];
}

printf("Sum is %d\n", sum);

return 0;
}
