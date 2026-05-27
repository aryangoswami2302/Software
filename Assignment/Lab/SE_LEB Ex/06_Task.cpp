#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    // Assigning address of num to pointer
    ptr = &num;

    printf("Original value of num = %d\n", num);

    // Modifying value using pointer
    *ptr = 25;

    printf("Modified value of num = %d\n", num);

    return 0;
}
