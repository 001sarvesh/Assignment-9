#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d ",&number);
    switch (number)
    {
    case 1:
        printf("31 Days");
        break;
    case 2:
        printf("28 days");
        break;

    case 3:
        printf("31 Days");
        break;

    case 4:
        printf("30 Days");
        break;

    case 5:
        printf("31 Days");
        break;

    case 6:
        printf("30 Days");
        break;

    case 7:
        printf("31 Days");
        break;

    case 8:
        printf("31 Days");
        break;

    case 9:
        printf("30 Days");
        break;

    case 10:
        printf("31 Days");
        break;

    case 11:
        printf("30 Days");
        break;

    case 12:
        printf("31 Days");
        break;

    default:
        printf("Invalid ");
        break;
    }
    return 0;
}