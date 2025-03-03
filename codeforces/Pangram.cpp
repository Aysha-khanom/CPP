#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    for(int i=0; i<n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
    }

    int aa[26]= {0};
    for(int i=0; i<n; i++)
    {
        aa[a[i]-97]++;
    }

    int cnt=0;
    for(int i=0; i<26; i++)
    {
        if(aa[i] > 0)
            cnt++;
    }

    if(cnt == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
