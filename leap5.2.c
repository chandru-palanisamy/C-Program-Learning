#include <stdio.h>
void main ()
{
   int i=1,n,fact=1;
   printf("enter the value: ");
   scanf("%d",&n);
   do
   {
    fact=fact*i;
    i++;
      /* code */
   } 
     while (i<=n);
   {
      fact=fact*i;
      i++;
   }
   printf("factorial:%d",fact);
   printf("%d",i);
}