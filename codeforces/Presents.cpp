#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int p=t;


    map<int,int>mp;
    int i=1;
    while(t--)
    {
        int n;
        cin >> n;
        mp[n]=i;
        i++;
    }

    for(int j=1; j<=p; j++)
    {
        cout << mp[j] << " ";
    }

    cout << endl;

}
