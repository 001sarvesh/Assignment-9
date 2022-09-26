//  Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
// 	float number;
// 	int choice;
// 	cout<<"Select 1, for Negative to positive"<<endl;
// 	cout<<"Select 2, for positive to negative"<<endl;
// 	cin>>choice;
// 	switch(choice)
// 	{
// 		case 1:
// 			cout<<"Enter a Negative number"<<endl;
// 			cin>>number;
// 				number=number*(-1);
// 				cout<<"the Positive form of the number is"<<endl;
// 				cout<<number;
// 			break;
// 		case 2:
// 			cout<<"Enter a Positive number"<<endl;
// 			cin>>number;
		
// 				number=number*(-1);
// 				cout<<"Negative form of the number is"<<endl;
// 				cout<<number;
// 		    break;
// 		default:
// 		    cout<<"Invalid Input, or Characters entered"<<endl;		
// 	}
// }


#include <stdio.h>
int main()
{
    int x;
    int choice;
    printf("Select 1, for negative to positive\n ");
    printf("Select 2,for positive to negative \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter a negative number ");
        scanf("%d",&x);
        x = x*(-1);
        printf("The positive form of number is %d",x);
        break;
    case 2:
    printf("Enter a positive number ");
    scanf("%d",&x);
    x = x*(-1);
    printf("The negative form of the number is %d",x);
    break;
    
    }
    return 0;
}
