//basic arithmetic calculator using c++ program

#include<iostream>
using namespace std;

int main()
{
	// using switch
	
	char op_er;//declare variable
	int a,b,c;
	cout<<"Enter the value of a ";
	cin>>a;
	cout<<"Enter the value of b" ;
	cin>>b;
    cout<<"Enter the Operator For Manipulation";
    cin>>op_er;
		
	switch(op_er)
	{
		case '+':
			{
				//addition operation 
				cout<<"The Addition of two Number is \t"<<c=a+b<<endl;
				break;
			}
		case '-':
			{  //subtraction 
				cout<<"The Subtraction of two number is \t"<<c=a-b<<endl;
				break;
			}
		case '*':
			{
				//multiplication
				cout<<"The Multiplication of tow Number is \t"<<c=a*b<<endl;
				break;
				
			}
		case '/':
			{
				//division
				cout<<"The Division of two Number is \t"<<c=a/b<<endl;
			    break;
			}
		case '%' :
			{
				//Modulus
				cout<<"The Modulus of two Number is \t"c=a%b<<enld;
				break;
			}
		default:
			//this is default if user give wrong operator this statement will executed to aware the user to give correct operator
			{
				cout<<"Please..! give the correct Value";
				break;//it is optional to give break in default case
			}
	}
	return 0;
}
