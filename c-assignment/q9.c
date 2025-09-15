#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 65; j < 65 + i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}

