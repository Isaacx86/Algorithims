// ith element of array challenge lab, user specified array will be changed

#include <stdio.h>
#include <stdlib.h>

int deletearray(int arr[], int n, int x)
{
    if(arr[n-1] == x)
        return (n-1);

    int prev = arr[n-1], i;

    for(i=n-2; i>=0 && arr[i]!=x; i--)
    {
        int curr = arr[i];
        arr[i] = prev;
        prev = curr;
    }
    if(i<0)
        return 0;
    
    arr[i] = prev;

    return (n-1);
}

int main()
{
    int arr[]= {28,3,10,20,3,4,11,21,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;

    n = deletearray(arr,n,x);
    printf("The modified array is \n");

    for(int i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}