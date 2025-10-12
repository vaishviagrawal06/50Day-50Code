#include <stdio.h>
int main() {
    int arr[] = {1, -2, 3, -4, -1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0; //position for negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }

    
    printf("Array after moving negatives:\n");  
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
