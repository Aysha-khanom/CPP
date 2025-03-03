#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

//        for(int i=0; i<v.size(); i++)
//        {
//            if(v[i] < x)
//            {
//                v.insert(v.begin()+i,x);
//                break;
//            }
//        }
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;

    }
}
