#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int r,cnt=0;

    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r==4 && r==7)
        {
           cnt++;
        }
    }

    if(cnt == 4 || cnt ==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
