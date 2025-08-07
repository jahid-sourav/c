#include <stdio.h>
int main (){
const float PI = 3.14;
float radius, area;
printf("Enter The Radius: ");
scanf("%f", &radius);

area = PI * radius * radius;

printf("Area is : %.2f\n", area);

return 0;
}
