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
        int siz = a.size();
        if(siz > 10)
            cout << a[0] << siz-2 << a[siz-1] << endl;
        else
            cout << a << endl;
    }

}
