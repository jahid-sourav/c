#include <stdio.h>
int squareNumb(int a){
    int result = a * a;
    return result;
}

int main (){
int n;
printf("Enter A Number: ");
scanf("%d", &n);
printf("The number of %d Square is %d\n", n, squareNumb(n));
return 0;
}
