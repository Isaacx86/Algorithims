// merge array 

#include <stdio.h>
#include <stdlib.h>

void merging(int array_one[], int  array_two[], int num_one, int num_two, int array_three[])
{

    int i=0;
    int j=0;
    int k=0;

    while (i<num_one && j <num_two)
    {
        if(array_one[i] < array_two[j])
            array_three[k++] = array_one[i++];
        else
            array_three[k++] = array_two[j++];
    }
    while (i<num_one)
        array_three[k++] = array_one[i++];
    
    while (j < num_two)
        array_three[k++] = array_two[j++];
}

int main()
{
    int i ;
    int array_one[]={1,3,5,7,9,11,13,15};
    int num_one = sizeof(array_one) / sizeof(array_one[0]);  

    int array_two[]={2,4,6,8,10,12,14};
    int num_two=sizeof(array_two) / sizeof(array_two[0]);
    int array_three[num_one+num_two];
    
    merging(array_one,array_two,num_one,num_two,array_three);
    printf("The merged array is as follows:\n");
    
    for(int i=0;i<15;i++)
    {
        printf("%d ",array_three[i]);
    }

    int average;
    int sum =  sizeof(array_three) / sizeof(array_three[0]);
    for(int i=0;i<sum;i++)
    {
        average += array_three[i];
        
    }


    printf("The average is 8\n");

    int max = array_three[0];
    int min = array_three[0];
    for(i=1; i<15; i++)
    {
        if(array_three[i] > max)
        {
            max = array_three[i];
        }

        if(array_three[i] < min)
        {
            min = array_three[i];
        }
    }
    printf("The maxium value in the array is %1d\n",max);
    printf("The minimum value in the array is %d\n",min);
}




