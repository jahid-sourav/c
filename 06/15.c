#include <stdio.h>
int main (){
int arr[5];
int arr1[5];

printf("Enter 5 Elements: ");

for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
     arr1[i] = arr[i];
}

printf("Copied Array : ");
for(int i = 0; i < 5; i++){
    printf("%d ", arr1[i]);
}

return 0;
}
