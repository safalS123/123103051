#include <stdio.h>
int add(int a, int b) // used to find sum
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int a, b;
    printf("enter 2 no.\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d", add(a, b));
    }
    if (a < b)
    {
        printf("%d", sub(a, b));
    }
    if (a == b)
    {
        printf("both no. equal");
    }
    return 0;
}
