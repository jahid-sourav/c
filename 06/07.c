#include <stdio.h>
void countEvenOdd(){
   int size;
   printf("Enter The Array Size: ");
   scanf("%d", &size);

   printf("Enter The Array Elements: ");
   int arr[size];

   for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
   }

   int even = 0, odd = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else if(arr[i] % 2 != 0){
            odd++;
        }
    }

    printf("Even Numbers are %d and Odd Numbers are %d", even, odd);

}

int main(){
countEvenOdd();

return 0;
}
