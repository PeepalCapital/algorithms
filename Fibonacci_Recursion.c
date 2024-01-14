/* Recursion based Fibonacci Number Algorithm */
/* Big O of 2^n */

#include<stdio.h>

int fibo(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fibo(a - 1) + fibo(a -2);

}


int main(void)
{
    int n;

    printf("Enter the Fibonacci number you want to know in its sequence: ");
    scanf("%d", &n);
    printf("The Fibonacci number in sequence is:%d \n", fibo(n));

    return 0;

}
