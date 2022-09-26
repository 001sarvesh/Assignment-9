#include <stdio.h>
int main()
{
    int x,a,b;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Division");
    printf("\n4.Multiplication\n");

    printf("Enter your choice\n");
    scanf("%d ",&x);

    switch (x)
    {
    case 1:
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        printf("The sum is %d", a+b);
        break;
     case 2:
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        printf("The Difference is %d", a-b);

        break;

 case 3:
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        printf("The Division is %d", a/b);

        break;

 case 4:
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        printf("The Multiplication is %d", a*b);

        break;

 

    default:
    printf("Invalid choice");
        break;
    }

    return 0;
}