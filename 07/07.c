#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
char a[100];
int al = 0, di = 0, spaces = 0, sc = 0, i = 0;

printf("Enter Your Text: ");
gets(a);

while(a[i] != '\0'){
    if(isalpha(a[i])){
        al++;
    }else if(isdigit(a[i])){
        di++;
    }else if(isspace(a[i])){
      spaces++;
    }else{
        sc++;
    }
    i++;
}

printf("Alphabets: %d\nDigits: %d\nSpaces: %d\nSpecial Character: %d\n", al, di, spaces, sc);

return 0;
}
