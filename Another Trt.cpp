#include <iostream>
using namespace std;

int main()
{
  int n,a,b,i,ar[100000],sum=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>ar[i];
  }
  cin>>a;
  for(i=0;i<a;i++)
  {
      cin>>b;
      for(int j=0;j<n;j++)
      {
          if(ar[j]%b==0 and ar[j]>7)
          {
              sum=sum+1;
          }
      }
      cout<<sum;
      sum=0;
  }
    return 0;
}

