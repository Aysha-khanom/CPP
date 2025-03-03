#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int a2[260]={0};

    for(int i=0; i<a.size(); i++)
    {
        a2[a[i]]++;
    }

    int cnt=0;
     for(int i=0; i<260; i++)
    {
        if(a2[i]!=0)
            cnt++;
    }

    if(cnt%2==0)
    cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
