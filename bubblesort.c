// Isaacs C implement of Bubble sort
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void display(const int *arr, int n)
{
    for(int i =0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped= true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}


int main()
{
    int arr[]={20,30,40,50,60,70,10,20,304,10,1,2,3,4,5,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sorting the array\n");
    bubbleSort(arr,n);
    printf("Sorted array is now\n");
    display(arr,n);
    int i,c;

    int position = 2; // Ith element of the array, changing this will vary the element that will be deleted
    printf("now deleting element number %d \n",position);

    if(position >=n+1)
        printf("Deletion is not possible!\n");
    
    else
        for(i=position-1;i<n-1;i++)
        arr[i]=arr[i+1];

    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    return 0;
}