#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n2;
    cin >> n >> n2;

    map<string, string> m;

    while(n--)
    {
        string a;
        string ip;
        cin >> a >> ip;
        ip+=';';
        m[ip] = a;
    }
    while(n2--)
    {
        string a2;
        string ip2;
        cin >> a2 >> ip2;

        cout << a2 << " " << ip2 << " #" << m[ip2] << endl;
    }
}
