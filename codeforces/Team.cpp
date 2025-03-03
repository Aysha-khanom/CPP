#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,output=0;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int cnt=0;
        if(a == 1)
            cnt++;
        if(b == 1)
            cnt++;
        if(c == 1)
            cnt++;

        if(cnt >=2)
            output++;
    }
    cout << output << endl;
}
