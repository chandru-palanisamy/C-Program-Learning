#include <stdio.h>

void main ()
{
  int n,note,rev=0;
  printf("enter n:");
scanf("%d",&n);
note=n;
while(note>0)
{
    rev=rev*10;
    rev=rev+(note%10);
    note/=10;

}
  if(n==rev)
  {
    printf ("is a palindrome");

  }
  else
  printf("not a palindrome");

}
