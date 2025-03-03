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

        if(a == "yes" || a == "YES" || a == "Yes" || a == "YEs" || a == "yEs" || a == "yeS" || a == "yES" || a == "YeS")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
