#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin >> n;

    if(n=='0')
    {
        cout << "0" << "\n";
    }

    else
    {

        for(i=1 ; i<=n ; i++)
        {
            sum+=i;
        }

        for(i=1 ; i<=n; i++)
        {
            cout << i << " ";
            if(i<=n-1)
            {
                cout << '+' << " ";
            }
        }

        cout << '=' << " ";
        cout << sum << "\n";

    }
}
