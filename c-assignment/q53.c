#include <stdio.h>

int main()
{
    int n;
    int num=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (i * 2) - 1; k = k + 1)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}