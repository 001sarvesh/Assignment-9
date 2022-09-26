#include <stdio.h>
int main()
{
    float x, amount=0, total=0;
    switch (x<=50)
    {
    case 1:
        amount = x*0.5;
        break;
    case 0:
    switch (x<=250)
    {
    case 1:
        amount = 100 + (x-150)*1.2;
        break;
    
    case 0:
    amount = 220 + (x-250)*1.5;
    break;
    }
    
        break;
        total = amount + amount*0.20;
    }
        printf("Total amount is %f\n", total);

    return 0;
}