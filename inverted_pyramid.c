#include <stdio.h>

int main()
{

    int rows = 5; // Number of rows in the inverted pyramid
    for (int i = rows; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}