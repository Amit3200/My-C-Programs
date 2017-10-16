#include <iostream>
using namespace std;
int primeno(int, int);
int main()
{
    int l,u, check,t=0,i,u1;
    cin>>t;
    for(u1=0;u1<t;u1++)
    {
    cin>>l>>u;
   for(i=l;i<=u;i++)
    {
    if(i!=1)	
    check = primeno(i, i / 2);
    if (check == 1)
    {
        cout<<i<<"\n";
        check=0;
    }
    else
    {
    	continue;
	}
    }
    }
    return 0;
}
 
int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }       
    }
}
