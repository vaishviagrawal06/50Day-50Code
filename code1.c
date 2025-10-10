#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int max,min;

    printf("enter no. of elements : ");
    scanf("%d",&n);

    printf("enter %d elements ",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("max element is %d\n",max);
    printf("min element is %d",min);
    return 0;
   
}