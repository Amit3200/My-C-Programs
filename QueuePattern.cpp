#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
  deque<string> d1;
  string k="a";
  for(int i=0;i<4;i++)
  {
    cin>>k;
    d1.push_back(k);
  }
  while(!d1.empty())
  {
   cout<<d1.back()<<"\n";
    d1.pop_back();
  }
}
