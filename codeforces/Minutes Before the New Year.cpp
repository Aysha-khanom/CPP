#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h,m;
        cin >> h >> m;

        int a = (24-h)*60;
        a-=m;

        cout << a << endl;
    }
}
