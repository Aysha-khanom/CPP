#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    int  cnt=0;
    while( T-- )
    {
        cnt++;
        ll n,k;
        cin >> n >> k;
        ll output = 0;

        while(n--)
        {
            ll x,y;
            cin >> x >> y;
            output+=k/x;
        }

        cout << "Case " <<cnt << ": " << output << endl;
    }
}
