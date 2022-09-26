#include <stdio.h>
int main()
{
    int x;
    printf("Enter your choice\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        if (x==1)
        {
            printf("Good");
            break;
        }
        case 2:
        if (x==2)
        {
            printf("Better");
            break;
        }
        case 3:
          if (x==3)
          {
            printf("Best");
            break;

          }
    
    default:
    printf("Invalid");
        break;
    }
    return 0;
}