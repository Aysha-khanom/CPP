#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin >> n >> k;

   vector<pair<int,int>>v;
   for(int i=0; i<n; i++)
   {
       int a,b;
       cin >> a >> b;
       v.push_back({a,b});
   }

   int cnt=0;
   for(int i=0; i<n; i++)
   {
       if(v[k].first == v[i].first && v[k].second == v[i].second)
        cnt++;
   }

   cout << cnt << endl;





}
