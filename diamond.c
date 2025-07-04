#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 3 - i; k < 4; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 4; i > 0; i--)
    {
        for (int j = 5 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 3 - i; k < 3; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}