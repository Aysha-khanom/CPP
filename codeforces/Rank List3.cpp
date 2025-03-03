#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>vec;

   int a,b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        vec.push_back({a,b});
    }

    sort(vec.rbegin(),vec.rend());

    for(int i=0; i<n; i++)
    {
        if(vec[i].first == vec[i-1].first && vec[i].second < vec[i-1].second)
        {
            swap(vec[i-1].second,vec[i].second);
        }
    }
    int cnt=0;
     for(int i=0; i<n; i++)
    {
       if(vec[k-1].first == vec[i].first && vec[k-1].second == vec[i].second)
        cnt++;
    }

    cout << cnt << endl;
}
