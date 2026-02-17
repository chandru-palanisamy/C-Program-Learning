#include <stdio.h>

int main()
{
    int i = 1, n, fact = 1;

    printf("Enter the value: ");
    scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;
    }
    while (i <= n);

    printf("Factorial: %d", fact);

    return 0;
}
