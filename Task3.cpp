#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"STUDENT GRADING "<<endl;
	cout<<"Enter student name :";
	cin>>name;
	int n,s=0;
	cout<<"Enter how many subjects :";
	cin>>n;
	int grade[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Give grade of subject" <<i+1<< ":";
		cin>>grade[i];
	}
	for(int i=0;i<n;i++)
	{
		s=s+grade[i];
	}
	int max=grade[0];
	int min=grade[0];
	for(int i=0;i<n;i++)
	{
		if (grade[i]>max)
		{
		     max=grade[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if (grade[i]<min)
		{
		     min=grade[i];
		}
	}
	float average;
	average=s/n;
	cout<<"\n\n";
	cout<<"STUDENT GRADING SUMMARY"<<endl;
    cout <<"________________________\n"<<endl;
    cout << "AVERAGE GRADE OF " << name << ": " << average << endl;
    cout << "HIGHEST GRADE OF " << name << ": " << max<< endl;
    cout << "LOWEST GRADE OF " << name << ": " << min << endl;
    return 0;
}
