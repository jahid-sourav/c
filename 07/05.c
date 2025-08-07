#include <stdio.h>
#include <string.h>

int main (){
char a[50];
char b[50];

printf("Enter First Word: ");
gets(a);
printf("Enter Second Word: ");
gets(b);

if(strcmp(a,b) == 0){
    printf("The strings are identical.\n");
}else{
    printf("The strings are not identical.\n");
}

return 0;
}
