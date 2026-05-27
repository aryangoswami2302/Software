#include<stdio.h>

// Recursive Method
int fibRecursive(int n)
{
    if(n == 0)
        return 0;

    else if(n == 1)
        return 1;

    else
        return fibRecursive(n-1) + fibRecursive(n-2);
}

// Iterative Method
int fibIterative(int n)
{
    int a = 0, b = 1, c, i;

    if(n == 0)
        return 0;

    for(i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Nth Fibonacci Number using Recursion = %d\n", fibRecursive(n));

    printf("Nth Fibonacci Number using Iteration = %d\n", fibIterative(n));

    return 0;
}
