//electricity bill 
#include <stdio.h>
int main()
{ 
    int sur=1000, cpu=7,u,t; 
    printf("enter the number of units:"); 
    scanf("%d",&u); 
    if(u>100)
    {printf("sur charge=%d",sur); 
     t=sur+cpu*u; }
    else 
    t=cpu*u; 
    printf("\nthe total charge is %d",t); 
    return 0; 
    }
