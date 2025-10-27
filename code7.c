//kadanes algorithm to find the maximum subarray sum
#include <stdio.h>
int kadanse_algo(int arr[], int n) {
    int maxsummarr = arr[0];
    int currsum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currsum < 0) {
            currsum = 0;
        }
        currsum += arr[i];
        if (currsum > maxsummarr) {
            maxsummarr = currsum;
        }
    }
    return maxsummarr;
}
int main() {
    int arr[] = {-3,-5,10,-7,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = kadanse_algo(arr, n);

    printf("Max subarray sum is %d\n", max_sum);

    return 0;
}

