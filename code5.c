// Find Union and Intersection of two arrays

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int unionArr[n1 + n2];
    int intersectionArr[n1 < n2 ? n1 : n2];
    int unionSize = 0, intersectionSize = 0;
    int i, j;

    // Find Union
    for (i = 0; i < n1; i++) {
        unionArr[unionSize++] = a[i];
    }
    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < unionSize; j++) {
            if (b[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        
        if (!found) {
            unionArr[unionSize++] = b[i];
        }
    }
    printf("Union: ");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    // Find Intersection
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                intersectionArr[intersectionSize++] = a[i];
                break;
            }
        }
    }
    printf("Intersection: ");
    for (i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionArr[i]);
    }
    printf("\n");
    return 0;
}