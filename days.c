#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number between 1 to 7\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:

        printf("Monday\n");
        break;

    case 2:

        printf("Tuesday\n");
        break;
    case 3:

        printf("Wednesday\n");
        break;
    case 4:

        printf("Thursday\n");
        break;
    case 5:

        printf("friday\n");
        break;
    case 6:

        printf("Sturday\n");
        break;
    case 7:

        printf("Sanday\n");
        break;
    default:

        printf("incorect number enter between 1 to 7\n");

        break;
    }
    return 0;
}
