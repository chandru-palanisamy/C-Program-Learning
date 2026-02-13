#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Enter a value: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
