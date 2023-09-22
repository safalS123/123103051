#include <stdio.h>
#include <complex.h>
#include <math.h>
complex roots(float a, float b, float c)
{
    float d = pow(b, 2) - 4 * a * c;
    complex root = (-b + pow(d, 0.5)) / (2 * a);
    return root;
}
int main()
{
    float a, b, c;
    printf("ax^2 + bx + c\nenter a, b & c\n");
    scanf("%f %f %f", &a, &b, &c);
    complex root1 = roots(a, b, c);
    complex root2 = (-b/a)-root1;
    printf("1st root is %f + %fi\n", creal(root1), cimag(root1));
      printf("2nd root is %f + %fi\n", creal(root2), cimag(root2));

    return 0;
}
