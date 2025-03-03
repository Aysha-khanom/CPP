#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c;
    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b >> c;
        int sum=0;
        int cnt=0;

        while(sum < n)
        {
            sum+=a;
            cnt++;
            if(sum >= n)break;

            sum+=b;
            cnt++;
            if(sum >= n)break;

            sum+=c;
            cnt++;
            if(sum >= n)break;
        }
        cout << cnt << endl;
    }
}
