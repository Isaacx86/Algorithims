#include <stdio.h>
#include <time.h>

int main() 
{
    //declaring variables
    float t1, t2, t3;
    float total = 0;
    float a = 0;
    float i = 0;

    t1 = clock();

    for (i = 1; i < 1000; i++) //changed the i value 10^2 through 10^6 to get all my answers below
    {
        a = 1 / i;
        total = total + a;
    }

    t2 = clock();
    t3 = t2 - t1;

    printf("Total: %f\nTime Taken: %.2f", total, t3);
    return 0;
}
