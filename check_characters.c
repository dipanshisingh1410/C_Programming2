//check if the input is digit,alphabet,or special character
#include <stdio.h> 
int main()
{ 
  char x; int t;
  scanf("%c",&x); 
  t=x+0;
  if(t>=48&&t<=57)
  printf("digit");
  if(t>=65&&t<=90||t>=97&&t<=122)
  printf("alphabet"); 
  else 
  printf("special character");return 0;
}
