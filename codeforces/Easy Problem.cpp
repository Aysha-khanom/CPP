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

        for(int b=1; b<=n-1; b++)
        {
            int a = n-b;
            if((a+b) == n)
                cnt++;
        }
        cout << cnt << endl;
    }
}
