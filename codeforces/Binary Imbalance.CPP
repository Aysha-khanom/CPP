#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        int cntz=0,cnto=0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == '0')
                cntz++;
            else
                cnto++;
        }

        if(cnto != n)
            cout << "YES" << endl;
        else
           cout << "NO" << endl;
    }
}
