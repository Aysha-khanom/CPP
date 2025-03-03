#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;

    vector<char>vec;
    for(int i=0; i<a.size(); i+=2)
    {
        vec.push_back(a[i]);
    }

    sort(vec.begin(),vec.end());
    int p=0;
    for(int j=0; j<a.size(); j++)
    {
        if(j%2==0)
        {
            cout << vec[p];
            p++;
        }
        else
            cout << '+';
    }

}
