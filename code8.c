//Check if array is sorted and rotated
#include<stdio.h>
int main()
{
    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            count++;
        }
    }
    if(count<=1){
        printf("Array is sorted and rotated\n");
    }
    else{
        printf("Array is not sorted and rotated\n");
    }
    return 0;
}
