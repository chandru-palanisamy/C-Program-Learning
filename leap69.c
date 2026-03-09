#include <stdio.h>
void main()
{
    int i,j,n,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++ )
    {
        if(j==1)
        {
        printf("not prime\n");
        continue;
    }
    flag=0;
    for(i=2;i<j;i++)
    {
    if(j%i!=0)
    {
        continue;
    }
    else{
       flag=1;
       printf("not prime \n");
       break;
    }
}

if (flag==0)
{
printf("prime\n");

}
    }
}
        




