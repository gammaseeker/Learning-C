#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cilk/cilk.h>
#include <cilk/cilk_api.h>

/*Cilk_SPAWN*/
int fib(int n)
{
    if (n < 2)
        return n;
    int x = cilk_spawn fib(n - 1);
    int y = fib(n - 2);
    cilk_sync;
    return x + y;
}

/*Serial Function*/
int fib_s(int n)
{
    if (n < 2)
        return n;
    int x = fib_s(n - 1);
    int y = fib_s(n - 2);
    return x + y;
}

int main(int argc, char *argv[])
{
    /*CILK SPAWN*/

    // Fibonacci number to be calculated.  39 is big enough to take a reasonable amount of time
    int n = 39;

    int result ;
    // Time how long it takes to calculate the nth Fibonacci number Serially first
    clock_t start = clock();
    result = fib_s(n);
    clock_t end = clock();
    double dur = (double)(end - start) / CLOCKS_PER_SEC;
    // Display our results
    printf("SERIAL  %.3f sec == \n\n", dur);

    // Time how long it takes to calculate the nth Fibonacci number Parallel
    start = clock();
    result = fib(n);
    end = clock();
    // Display our results
    dur = (double)(end - start) / CLOCKS_PER_SEC;
    printf("PARALLEL  %.3f sec == \n\n", dur);

    return 0;
}
