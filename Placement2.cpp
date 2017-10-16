#include<iostream>
using namespace std;
int main()
{
	char arr[][20]={"LGSI","LGE","INDIA","KOREA"};
	char *str[]={"LGSI","LGE","INDIA","KOREA"};
	char **pstr=str;
	cout<<sizeof(str);
	cout<<"\n"<<sizeof(arr);
	cout<<"\n"<<sizeof(pstr);
}
