/* Algorithm Technique: Recursion */
/* Euclid's method of finding GCD */

#include<stdio.h>

int gcd(int x, int y);

int main(void)
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("The Greatest Common Divisor of %d and %d is %d\n", a, b, gcd(a,b));

    return 0;
}

int gcd(int m, int n)
{
    if(n == 0)
        return m;
    else
        return gcd(n, m % n);
}