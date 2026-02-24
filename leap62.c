#include <stdio.h>

void main ()
{
  int n,true ,rev=0;
  printf("enter n:");
  scanf("%d",&n);
  true=n;
  while(true>0)
  {
    rev=rev*10;
    rev=rev+(true%10);
    true/=10;

  } 
  printf("revasical:%d",rev);

}
    