#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    // Taking input from user
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Concatenating strings
    strcat(str1, str2);

    // Displaying concatenated string
    printf("\nConcatenated String = %s\n", str1);

    // Displaying string length
    printf("Length of String = %lu\n", strlen(str1));

    return 0;
}
