#include <stdio.h>
void prime(int n)
{
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime\n", n);
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        printf("%d is a prime no.", n);
    }
}

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    prime(n);

    return 0;
}
