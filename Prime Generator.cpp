#include <iostream>
using namespace std;

int main()
{
    int low, high, i, flag,t=0,k=0;
cin>>t;
while(k!=t)
{
    cin >> low >> high;
    while (low <= high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0 and low!=1)
            cout << low << "\n";

        ++low;
    }
    k++;
}

    return 0;
}
