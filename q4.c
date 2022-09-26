#include <stdio.h>
int main()
{
    int choice, a, b, c;
    while (1)
    {
        printf("\nEnter your choice\n");
        printf("\n1.to check isosceles triangle ");
        printf("\n2.to check right angle triangle ");
        printf("\n3.to check equilateral triangle ");
        scanf("%d", &choice);

        printf("Enter the length of three sides of triangle\n");
        scanf("%d %d %d", &a, &b, &c);

        switch (choice)
        {
        case 1:
            if (a == b || b == c || c == a)
            {
                printf("Isosceles Triangle");
            }
            else
            {
                printf("Not isosceles");
            }
            break;

        case 2:
            if (a *a == b *b + c *c || b *b == c *c + a *a || c *c == b * b + a * a)
            {
                printf("Right angle triangle");
            }
            else
            {
                printf("Not right angle triangle");
            }
            break;

        case 3:
            if (a == b && b == c)
            {
                printf("Equilateral triangle");
            }
            else
            {
                printf("Not Equilateral triangle");
            }
            break;

        default:
            printf("Invalid choice ");
            break;
        }
    }

    return 0;
}