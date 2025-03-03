#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0;
        cin >> n;
        for(int i=0; i<=n; i++)
        {
            if(i%3 == i%5)
                cnt++;
        }
        cout << cnt << endl;
    }
}
