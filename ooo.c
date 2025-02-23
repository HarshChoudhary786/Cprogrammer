
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, i, n, sum = 0;
    printf("How many element you want to sum : ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    printf("Enter the %d element in array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nSum of all elements: %d", sum);

    return 0;
}
