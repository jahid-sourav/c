#include <stdio.h>
#include <string.h>
int main (){
char a[50];
printf("Enter The Word: ");
gets(a);
printf("Reverse The word : %s\n", strrev(a));

return 0;
}
