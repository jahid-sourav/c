#include <stdio.h>
int main (){
int a,b,c,d,smallest;

printf("Enter 4 Numbers : ");
scanf("%d %d %d %d", &a, &b, &c, &d);

smallest = (a < b) ? ((a < c) ? ((a < d) ? a : d) : ((c < d) ? c : d)) : ((b < c) ? ((b < d) ? b : d) : ((c < d) ? c : d));

printf("Smallest Number is %d\n", smallest);


return 0;
}

