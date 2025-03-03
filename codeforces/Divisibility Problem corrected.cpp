#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,cnt=0;
        cin >> a >> b;

        if(a%b == 0)
            cout << '0' << endl;

            else
            {
                cnt = a%b;
                cout << b-cnt << endl;
            }
    }
}
