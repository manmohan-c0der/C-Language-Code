#include <stdio.h>
int main()
{
    int n, a = -1, b = 1, c;
    printf("Enter a number to find fabonacci Series \n");
    scanf("%d", &n);
    printf("The number %d  of fabonacci Series is : ",n);

    for (int i = 0; i <= n; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }

    return 0;
}
