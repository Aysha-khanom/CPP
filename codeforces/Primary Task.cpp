#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;

        if(a.size() == 3 && a[0] == '1' && a[1] == '0')
        {
            int b = a[2]-'0';
            if( b > 1 )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if(a.size() > 3 && a[0] == '1' && a[1] == '0')
        {
            int b = a[2]-'0';
            if( b >= 1 )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
