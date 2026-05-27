#include<stdio.h>

int main()
{
    FILE *fp;
    char data[100];

    // Creating and writing into file
    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a string: ");
    gets(data);

    fprintf(fp, "%s", data);

    fclose(fp);

    // Opening file for reading
    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    // Reading and displaying file content
    fgets(data, 100, fp);

    printf("\nFile Content:\n");
    printf("%s", data);

    fclose(fp);

    return 0;
}
