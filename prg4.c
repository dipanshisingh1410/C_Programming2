//salary 
#include <stdio.h>
int main()
{ 
    int da,hra,bs,t; 
    printf("enter the basic salary:"); 
    scanf("%d",&bs); 
    if(bs>20000)
    {hra=0.2*bs; 
    da=0;} 
    else 
    {hra=0; 
    da=5000; }
    t=bs+hra+da; 
    printf("the hra ,da and total salary is:%d\n%d\n%d",hra,da,t); 
    return 0; 

}