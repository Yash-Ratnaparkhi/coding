#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 3 - i; k < 4; k++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}