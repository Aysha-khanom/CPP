#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n=t;
    int cnt=0;

        vector<pair<string,string>>vec;
        string x,y;
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            vec.push_back({x,y});
        }

        for(int i=0; i<vec.size(); i++)
        {
            int flag = 0;
            for(int j=i+1; j<vec.size(); j++)
            {
                if(vec[i].first == vec[j].first && vec[i].second == vec[j].second)
                    flag = 1;

            }
            if(flag == 0)
                cnt++;
        }

    cout << cnt << endl;
}
