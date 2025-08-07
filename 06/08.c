#include <stdio.h>
void getSumOfEvenOddElements(){
    int size;
    printf("Enter The Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter The Array Elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int sumOfEven = 0, sumOfOdd = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            sumOfEven += arr[i];
        }else if(arr[i] % 2 != 0){
                sumOfOdd += arr[i];
        }
    }

    printf("Even Sum : %d\nOdd Sum : %d", sumOfEven, sumOfOdd);
}


int main (){
getSumOfEvenOddElements();
return 0;
}
