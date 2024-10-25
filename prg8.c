//write a c program to find the next date of the given input date.
#include <stdio.h> 
int main() 
{ 
    int d,m ,y; 
    printf("enter the date , month and year:"); 
    scanf("%d%d%d",&d,&m,&y); 

    if ((d>32&&(m==1||m==3||m==5||m==7||m==8||m==10))||(d>31&&(m==4||m==6||m==9||m==11||m==12))||(d>29&&m==2&&!(y%4==0&&y%100!=0||y%400==0))||(d>30&&m==2&&(y%4==0&&y%100!=0||y%400==0)))
    printf("Invalid date "); 
    else { 
    if(y%4==0&&y%100!=0||y%400==0)
    {if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31)
      {d=1;m++;} 
    else if((m==4||m==6||m==9||m==11||m==12)&&d==30)
      {d=1;m++;}
    else if((m==2&&d==29))
    {d=1;m++;}
    else if(m==12||d==31)
    {d=1;m=1;y++;}
    else 
    d++;}
    else if(!(y%4==0&&y%100!=0||y%400==0))
    {if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31)
      {d=1;m++;} 
    else if((m==4||m==6||m==9||m==11||m==12)&&d==30)
      {d=1;m++;}
    else if((m==2&&d==28))
    {d=1;m++;}
    else if(m==12||d==31)
    {d=1;m=1;y++;}
    else 
    d++;} }

    printf("next date, month and year is:%d %d %d",d,m,y);
return 0 ;}