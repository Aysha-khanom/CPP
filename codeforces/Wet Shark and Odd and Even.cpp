#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    long long int sum=0;
    cin >> n;

    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    for(int i=0; i<vec.size(); i++)
    {
        sum+=vec[i];
    }
    if(sum%2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]%2 != 0)
            {
                sum-=vec[i];
                break;
            }
        }
        cout << sum << endl;
    }
}

