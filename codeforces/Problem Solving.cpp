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
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }

        if(vec[n-1]==n && vec[n-2]==n-1)
            cout << n-1 << endl;
        else
            cout << "Ambiguous" << endl;
    }
}
