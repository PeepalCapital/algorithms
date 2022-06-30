/* Algorithm Technique: Recursion */
/* Finding factorial of a non negative integer */

#include<stdio.h>

unsigned long long factorial (int m);

int main(void)
{
    int a;

    printf("Enter number for which factorial is needed: ");
    scanf("%d", &a);

    printf("%d! is %llu\n", a, factorial(a));

    return 0;
}

unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}