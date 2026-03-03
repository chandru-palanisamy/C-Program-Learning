#include <stdio.h>
void main()
{
    int i,n,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        continue;
    
    else
    {
        flag=1;
        printf("not a prime\n");
        break;
    }
}
if(flag==0)
{
    printf("prime");

}

}
