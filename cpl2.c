#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a == 0)
    {
        printf("Number is zero");
    }
    else if(a > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
