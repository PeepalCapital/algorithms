/* Counting to a billion */
/* CPU time used: 1.265722 seconds on a 2019 Macbook Pro */
/* Execution time for a similar counting on Python using Jupyter Notebook was 86.30073595046997 secs */

#include <stdio.h>
#include <time.h>

#define N 1000

int main(void)
{
    clock_t start_time, end_time;
    double cpu_time_used;
    start_time = clock();

    int i, j, k, count;
    count = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            for (k = 0; k < N; k++)
                count++;
    
    printf("%d\n", count);

    end_time = clock();
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}
