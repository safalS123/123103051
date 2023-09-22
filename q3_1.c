#include <stdio.h>

int factorial(int a)
{
    int f;
    if (a <= 1)
    {
        f = 1;
    }
    else
    {
        f = a * factorial(a- 1);
    }
    return f;
}

int main()
{
    printf("you want to calculate factorial of?\n");
    int a, f;
    scanf("%d", &a);
    f = factorial(a);
 
    if (a< 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d! is %d\n", a, f);
    }

    return 0;
}
