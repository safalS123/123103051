#include <stdio.h>

int main()
{
    float result = 0;
    char operator;
    float n;

    while (1)
    {
        printf("Current result: %f\n", result);
        printf("Enter operator, number, or 'C' to clear, 'E' to exit: \n");
        scanf(" %c", &operator);

        if (operator== 'E')
        {
            break;
        }

        if (operator== 'C')
        {
            result = 0;
        }
        else
        {
            scanf("%f", &n);

            switch (operator)
            {
            case '+':
                result += n;
                break;
            case '-':
                result -= n;
                break;
            case '*':
                result *= n;
                break;
            case '/':
                if (n != 0)
                {
                    result /= n;
                }
                else
                {
                    printf("error\n");
                }
                break;
            default:
                printf("please enter correct operator\n");
                break;
            }
        }
    }

    printf("Final result: %f\n", result);

    return 0;
}
