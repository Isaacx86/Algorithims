// algo in log N example with while else elif statements
#include <stdio.h>
#define SIZE 5

int intersection(int a[],int b[])
{
    int i=0,j=0;
    int len_a =SIZE,len_b=SIZE;

    while(i<len_a && j<len_b){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            printf("%1d,",b[j++]);
            i++;
        }
    }

}

int main()
{
    int a[SIZE]={1,2,3,4,5};
    int b[SIZE]={2,3,4,5,6};

    printf("The following is the intersection of the given sorted array\n");
    intersection(a,b);
    return 0;
}