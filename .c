#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // Input
    int N;
    scanf("%d", &N);

    int currentNumber = 1;
    for (int i = 1; i <= N; i++)
    {
        // Print spaces
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        // Print numbers separated by stars
        for (int j = 1; j <= i; j++)
        {
            printf("%d", currentNumber++);
            if (j < i)
            {
                printf("*");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
