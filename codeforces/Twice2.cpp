#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int cnt=0;
        for(auto it : m)
        {
            if(it.second == 2 || it.second%2 == 0)
                cnt++;
        }

        cout << cnt << endl;
    }


}
