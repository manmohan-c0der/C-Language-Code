
#include <stdio.h>
int prime(int n) {
    for (int i = 2; i <= (n/2); i++)
{
    if (n % i == 0)
    {
        printf(" Not prime %d\n",n);
        return 0;
    }
    
    
}
return 1;
}   
int main()
{
    int n1, n2;
    printf("Enter the two numbers\n");
    scanf("%d%d", &n1, &n2);
    printf("The prime numbers between you enter n1 to n2\n ");
    for (int j = n1; j <= n2; j++)
    {
        if (prime(j))
        {
            printf(" Prime %d\t", j);
        }
       
    }

    return 0;
}
