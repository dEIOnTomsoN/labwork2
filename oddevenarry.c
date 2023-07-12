#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            even[even_count] = arr[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }
    printf("Even elements in the array: ");
    for(i=0; i<even_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements in the array: ");
    for(i=0; i<odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}
