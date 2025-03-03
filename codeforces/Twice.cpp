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
        vector<int>vec(n);

        for(int i=0; i<n; i++)
            cin >> vec[i];

        sort(vec.begin(),vec.end());

        for(int i=1; i<n; i++)
        {
            if(vec[i-1] == vec[i])
            {
                cnt++;
                i++;
            }
        }
        cout << cnt << endl;
    }



}
