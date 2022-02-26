//fibbo improved dotc
#include <stdio.h>
#include <math.h>

int fibonacci(int n){
    double fib =(1 + sqrt(5)) / 2;
    return round(pow(fib, n) / sqrt(5));
}

int main()
{
    int n = 20;
    printf("The %d th fibbonaci number is %d",n,fibonacci(n));
    return 0;
}