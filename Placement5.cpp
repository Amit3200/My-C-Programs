#include<iostream>
using namespace std;
main()
{
	char array[]="Hello World";
	char *str=array;
	do
	{
		switch(*str)
		{
			case 'W':
				cout<<"W";
				break;
			case 'H':
				cout<<"H";
				break;
			case 'L'^32:
				cout<<"l";
				break;
			default:
				cout<<*str;
				break;
		}
		str++;
	}
	while(*str);
}
