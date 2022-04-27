#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Please type a height between 1-8\n");
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // For each row

    for (int i = n; i >= 1; i--)

    {
            // For empty Space b4 blocks
            for (int j = 2; j <= i; j++)
            {
                // Spaces b4 first blocks
                printf(" ");
            }
            // Blocks (I know it said to use # but [ ] looks soo much better)
            for (int k = n; i <= k; k--)
            {
                    printf("#");
            }
            //the spaces
            for (int j = 1; j <= 2; j++)
            {
                printf(" ");
            }
            // Blocks
            for (int k = n; i <= k; k--)
            {
                    printf("#");
            }
            // Next Row
            printf("\n");
    }

}