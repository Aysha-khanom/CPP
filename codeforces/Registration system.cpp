#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    map<string,int>m;
    while(t--)
    {
        string a;
        cin >> a;
        m[a]++;

        if(m[a] == 1)
        {
           cout << "OK" << endl;
        }

        else
        {
            cout << a << m[a]-1 << endl;
        }
    }
}
