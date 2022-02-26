

// Challenge - 1. Write a program to generate M random integers and put them in an array, then check how randon your randon number geenerator is!. Generate another sequenece of random mumbers N and count how many times it occurs in the array - using sequential (linear search)




// Program author: Isaac barry TU 857
// 2/23/2021

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int size;
	int counter =0;
    float t1,t2,t3;
    t1=clock(); // start the clock function for timing the variable execution

	printf("please input the size of your array:\n");
	scanf("%d", &size);

	int i;
	int m[size]; // defining both M & n as the user defined size
	int n[size];

	for (i=0;i<size;i++) // statement of for, Gets the values of m & n and inputs random values between 0 and 100
	m[i]=rand()%100;

	for(i=0;i<size;i++)
	n[i]=rand()%100;


	printf(" \nThe elements of the array that M occurs with are the following:");
	
	for(i=0;i<size;i++) //printing N & M array
	{
		printf("The element number %d = %d\n", i+1, m[i]);
	}
    printf(" \nThe elements of the array that N occurs with are the following:");
	for(i=0;i<size;i++)
	{
		printf("The element number %d = %d\n", i+1, n[i]);
	}
    
	    for(i=0;i<size;i++)
	    {
            if(n[i]!=m[i])
			    counter++;
        }
    t2=clock();
    t3=t2-t1;
	printf("The counter is %d\n", counter);
    printf("The time taken for executed was %.2f mileseconds", t3); // last clock for defining execution time
	return 0;
}
