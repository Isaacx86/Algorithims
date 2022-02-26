//question3 B dot c

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n = 20;
    printf("The %d th fibbonaci number is %d",n,fibonacci(n));
    return 0;
}