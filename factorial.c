#include <cs50.h>
#include <stdio.h>

int factorial(int n);
int main(void)
{
    // Get input
    int n = get_int("Find factorial of: ");
    int answer = factorial(n);
    printf("%i\n", answer);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
