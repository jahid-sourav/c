#include <stdio.h>
int main (){
int arr[5] = {1,2,3,4,5};
int largest = arr[0];
int smallest = arr[0];

for(int i = 0; i < 5; i++){
    if(arr[i] > largest){
        largest = arr[i];
    }else if(arr[i] < smallest){
        smallest = arr[i];
    }
}

printf("Largest is %d and Smallest is %d and the Difference is %d", largest, smallest, largest - smallest);

return 0;
}

