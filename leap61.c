#include <stdio.h>

void main ()
{
    int n,copy,rev=10;
    printf("enter n:");
    scanf("%d",&n);
    copy=n;

    while(copy>0)
    {
        rev=rev*10;
        rev=rev+(copy%10);
        copy/=10;
    }
    printf("reverse:%d",rev);
    
}
    