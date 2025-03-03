#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;

        if(a[1] == '+')
            cnt++;
        else
            cnt--;
    }
    cout << cnt;
}
