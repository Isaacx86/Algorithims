// Intersection algorithm for algorithims assignment, 
// Code author: Isaac barry. 

#include <stdio.h>
#define SIZE 5


int main()
{
    int a[] ={1,2,3,4,5,6}, b[]={4,5,6,7,8};
    int length_of_a, length_of_b, i, x=0, y=0;

//    printf("Please enter the length of first array");

//    scanf("%1d",&length_of_a);

    /*printf("enter the values of the first array");

    for(i=0;i<length_of_a;i++){
        scanf(" %1d ",&a[i]);
    }
    
 //   printf("Please enter the length of second array");

//    scanf("%1d",&length_of_b);

    printf("enter the values of the second array");

    for(i=0;i<length_of_b;i++){
        scanf("%1d",&b[i]);
    }
*/
    while(x<=length_of_a && y <= length_of_b){
        
        if(a[x]<b[y]) {
            x++;
        }else if(b[y] < a[x]){
            y++;
        } else if(a[x] == b[y]){
            printf("%1d",a[x]);
            x++;
            y++;
        }
    }
    return 0;
}