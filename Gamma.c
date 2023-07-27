#include <stdio.h>
int Gammafind(int n)
{
    int val = 1;
    // for (int i = n; i > 1; i--)
    // {
    //     val *= i;
    // }
    // return val;
    for (int i=1; i<=n; i++){
        val *=i;
        
    }
    return val;
}
int main()
{
    int n;
    printf("Enter a number for find the gamma\n");
    scanf("%d", &n);
    int Gamma = Gammafind(n);
    printf("The value of Gamma is: %d\n", Gamma);
    return 0;
}