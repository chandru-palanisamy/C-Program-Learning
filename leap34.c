#include <stdio.h>
#include <math.h>

int main()
{
    int n, copy, digit = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    copy = n;

    // Count digits
    while (copy > 0)
    {
        copy = copy / 10;
        digit++;
    }

    copy = n;

    // Calculate sum of powers
    while (copy > 0)
    {
        sum = sum + pow(copy % 10, digit);
        copy = copy / 10;
    }

    if (sum == n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
}

    