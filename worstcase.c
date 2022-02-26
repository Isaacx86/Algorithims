// Program author: Isaac barry, This is using nested for loops to check for intersection between sorted array
#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE]={1,2,3,4,5};
    int b[SIZE]={1,3,4,5,6};

    int i,j,len_a=SIZE,len_b=SIZE;
    printf("Intersection of the the two sorted elements\n");
    for(i=0;i<len_a;i++){
        for(j=0;j<len_b;j++){
            if(a[i]==b[j]){
                printf("%1d,",a[i]);
            }
        }
    }
}