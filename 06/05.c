#include <stdio.h>
int main (){
int size;
printf("Enter the Size of Array: ");
scanf("%d", &size);
int arr[size];
printf("Enter The Array Elements: ");
for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
}
float average;
int sum = 0;
for(int i = 0; i < size; i++){
    sum += arr[i];
}
printf("Average: %.2f\n", (float)sum / size);

return 0;
}
