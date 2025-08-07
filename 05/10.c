#include <stdio.h>

void func(int numb){
    int first = 0, second = 1, next;
    printf("The FeboN Series of %d is: \n", numb);

    for(int i = 1; i <= numb; i++){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main (){
func(10);
return 0;
}
