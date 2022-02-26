// ABSTR ACT DATA TYPE ALGO
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    void *dataptr;
    struct node *next;
}adt;

typedef struct 
{
    adt *front;
    adt *rear;
}QUEUE;


int main()
{
    int i;
    char stringofarray[50];
    int n = sizeof(stringofarray);
    printf("Please input a given string:\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",stringofarray[i]);
    }
    for(i=0;i<sizeof(stringofarray);i++)
    {
        if(stringofarray[i] == '*')
        {
            for(i;i<sizeof(stringofarray);i++)
            {   
                toupper(stringofarray[i]);
            } 
        }
        printf("%c",stringofarray[i]);
    }
}