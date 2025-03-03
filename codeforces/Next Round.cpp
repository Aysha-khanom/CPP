#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;

    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    int found=0;
    for(int i=n-1; i>=0; i--)
    {
        if(vec[i] == vec[k])
        {
            found += i;
            break;
        }
    }
       cout << found << endl;
}
