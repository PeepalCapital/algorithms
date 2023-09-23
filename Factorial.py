# Algorithmic technique: Recursion
# Finding a factorial of a natural number

def factorial(n):
    if n == 1:
        return 1
    else:
        n = n * factorial(n - 1)
    return n

x = input("Enter a natural number: ")
print("The factorial of the number "+ x + " is " + str(factorial(int(x))))
