#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    int m = n / 2 + 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == m)
                printf("*");
            else if (j == m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}