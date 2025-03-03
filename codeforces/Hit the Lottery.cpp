#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n;

    while(n!=0)
    {
        if(n%100==0)
        {
            cnt++;
            n/=100;
        }
        else if(n%20==0)
        {
            cnt++;
            n/=20;
        }
        else if(n%10==0)
        {
            cnt++;
            n/=10;
        }
        else if(n%5==0)
        {
            cnt++;
            n/=5;
        }
        else
         {
             cnt+=n;
             break;
         }

    }
    cout << cnt << endl;
}
