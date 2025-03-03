#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;

    int a,b;
    vector<pair<int,int>>vec;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        vec.push_back({a,b});
    }

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    cout << "after "<< endl;
     for(int i=0; i<n; i++)
    {
            cout << vec[i].first << " " << vec[i].second << endl;
    }

//    int cnt=0;
//    for(int i=0; i<n; i++)
//    {
//        if(vec[k-1].first==vec[i].first && vec[k-1].second==vec[i].second)
//        {
//            cout << vec[i].first << " " << vec[i].second << endl;
//          //  cnt++;
//        }
//    }
//  //  cout << cnt << endl;
}
