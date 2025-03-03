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
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int x1;
            cin >> x1;
            vec.push_back(x1);
        }

        vector<int>vec2(100,0);
        int coun =0;

        for(int i=0; i<vec.size(); i++)
        {
            vec2[vec[i]]++;
        }

        for(int i=0; i<100; i++)
        {
            if(vec2[i] == 1)
                coun++;
        }
        if(coun == x)
            cout << "Good" << endl;
        else if(coun > x)
            cout << "Average" << endl;
        else
            cout << "Bad" << endl;

    }
}
