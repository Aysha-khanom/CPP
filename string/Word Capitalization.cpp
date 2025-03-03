#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++)
    {
        if(a[0]>='a' && a[0]<='z')
        {
            a[0]-=32;
        }
    }
    cout << a;
}
