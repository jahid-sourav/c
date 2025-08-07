#include <stdio.h>
int main (){
int a,b,c,d,max;

printf("Enter 4 Numbers : ");
scanf("%d %d %d %d", &a, &b, &c, &d);

max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

printf("Largest Number is %d\n", max);


return 0;
}
