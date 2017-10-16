#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct student
{
	vector<string>name;
	vector<int>totalmarks;
}s[20];
int main()
{
	string n1;
	int m,n,i;
    cout<<"Enter the size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"\nEnter the name : ";	
	cin.ignore();
	getline(cin,n1);
	s[i].name.push_back(n1);	
	cout<<"\nEnter the marks : ";
	cin>>m;
	s[i].totalmarks.push_back(m);
    }
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"\n";
	for(i=0;i<n;i++)
	{
	cout<<"\nName : "<<s[i].name[0];
	cout<<"\nMarks : "<<s[i].totalmarks[0];
	}	
}
