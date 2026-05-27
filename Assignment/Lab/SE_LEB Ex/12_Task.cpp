#include<stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    float average;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Calculating average
    average = (float)sum / n;

    // Displaying results
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
