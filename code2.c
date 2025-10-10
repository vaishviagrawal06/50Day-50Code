#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n -i- 1] = temp;
    }

    printf("Reversed array: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
