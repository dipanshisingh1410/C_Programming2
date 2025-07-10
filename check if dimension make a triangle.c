//check triangle
#include <stdio.h>
int main()
{ int a, b,c; 
printf("enter the three sides:"); 
scanf("%d%d%d",&a,&b,&c); 
if(a==b&&b==c&&a==c)
printf("equilateral"); 
else if(a==b&&b!=c||a==c&&c!=b||c==b&&b!=a) 
printf("isosceles"); 
else 
printf("scalene"); 
return 0; 
} 
