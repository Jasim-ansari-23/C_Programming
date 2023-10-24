// factorial of n

#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number you want into the factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    return 0;
}