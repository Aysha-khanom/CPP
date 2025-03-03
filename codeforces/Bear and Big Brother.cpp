#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=1;
    cin >> a >> b;

    while(1)
    {
        a*=3;
        b*=2;
        if(a > b)
            break;
        else
            cnt++;
    }
        cout << cnt << endl;
}
