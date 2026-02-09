#include<stdio.h>
void main()
{
int i=1,a=0;
printf("enter a number:");
scanf("%d",&a);
 for(i=1;i<=100;i++)
 {
    a=a+i;
 }
 printf("a:%d",&a);
}
