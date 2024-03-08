#include<iostream>
using namespace std;
int main()
{
	int n, n1,n2,a;
	do
	{
	cout<<"GIVE YOUR CHOICE\nENTER 1 : ADDITION \nENTER 2 : SUBTRACTION\nENTER 3 : MULTIPLICATION\nENTER 4 : DIVISION"<<endl;
	cin>>n;
	cout <<"Enter first number to perform calculation : ";
	cin>>n1;
	cout <<"Enter second number to perform calculation : ";
	cin>>n2;
	switch (n)
	{
		case 1 : cout<<"RESULT : "<<n1+n2<<endl;break ;
		case 2 : cout<<"RESULT : "<<n1-n2<<endl;break;
		case 3 : cout <<"RESULT : "<<n1*n2<<endl;break;
		case 4:
                if (n2 != 0)
                {
                    cout << "Result: " << n1 / n2 << endl;
                }
                else
                 {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
		default : cout<<"invalid choice"<<endl;
	}
	cout<<"\n\ndo you want to perform another calculation press 1 else press any other key : ";
	cin>>a;
	}while(a==1);
	return 0;

}
