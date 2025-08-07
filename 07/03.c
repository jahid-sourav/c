#include <stdio.h>
#include <string.h>
int main (){
char a[50];
printf("Enter 50 Words String: ");
gets(a);
int length = strlen(a);
printf("Length is %d", length);

return 0;
}
