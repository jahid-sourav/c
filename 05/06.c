#include <stdio.h>
int printFunct(int numb){
     printf("First %d Natural Numbers are:\n", numb);
for(int i = 1; i <= numb; i++){
    printf("%d\n", i);
}
}

int main () {
printFunct(10);

return 0;
}
