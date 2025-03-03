#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin >> n;

    vector<int>vec;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        vec.push_back(r);
    }
    sort(vec.begin(),vec.end());

    int flag=0;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==vec[i+1])
        {
           continue;
        }
        else if(vec[i]>)
            cout<<vec[i];
    }


}
