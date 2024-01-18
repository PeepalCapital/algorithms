/* Code to compute floor of a logarithm in base 2 */

#include<stdio.h>

int main(void)
{
    int i, N = 1073741824; /* N is the total sample space */
    int original_N = N;

    for ( i = 0; N > 0; i++)
    {
        printf("%d\t%d\n", i, N);
        N = N / 2;
    }
    printf("\nN\tlg(N)\n");

    printf("%d\t%d\n", original_N, i - 1);

    return 0;
}
