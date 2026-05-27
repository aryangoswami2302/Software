#include<stdio.h>

int main()
{
    int marks;

    // Taking input from user
    printf("Enter student marks: ");
    scanf("%d", &marks);

    // Checking grade using if-else
    if(marks > 90)
    {
        printf("Grade A");
    }
    else if(marks > 75 && marks <= 90)
    {
        printf("Grade B");
    }
    else if(marks > 50 && marks <= 75)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }

    return 0;
}
