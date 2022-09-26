#include <stdio.h>
int main()
{
    int number, choice;
    printf("Enter the number which you want to convert ");
    scanf("%d",&number);

switch (number%2==0)
{
case 1:
    printf("Nearest Upper odd is %d", number+1);
    break;

}

    return 0;
}