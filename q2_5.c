#include <stdio.h>
void min(int a, int b, int c, int d)
{
    if (a < b && a < c && a<d)
    {
        printf("min is a\n");
    }
    else if (b < c && b < a && b<d)
    {
      printf("min is b\n");
    }
    else if (d < c && d < a && d<b)
    {
        printf("min is d\n");
    }
    else if (a == b == c == d)
    {
        printf("all are equal\n");
    }
    else
    {
       printf("min is c\n");
    }
}
void max(int a, int b, int c, int d)
{
    if (a > b && a > c && a>d)
    {
        printf("a is greatest\n");
    }
    else if (b > c && b > a && b>d)
    {
        printf("b is greatest\n");
    }
    else if (d > c && d > a && d>b)
    {
        printf("b is greatest\n");
    }
    else if (a == b == c == d)
    {
        printf("all are equal\n");
    }
    else
    {
        printf("c is greatest\n");
    }
}
    int main()
    {
        int a, b, c, d;
        printf("enter 4 numbers\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        max(a, b, c, d);
        min(a,b,c,d);

        return 0;
    }
