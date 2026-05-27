#include<stdio.h>

int main()
{
    int num, i, flag = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking prime number
    if(num <= 1)
    {
        flag = 1;
    }

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is not a Prime Number\n", num);
    }

    return 0;
}
