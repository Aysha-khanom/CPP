#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,cnt=0,mul=0;
        cin >> a >> b;

        if(a%b == 0)
            cout << '0' << endl;
        else if(a<b)
        {
            cout << b-a << endl;
        }
        else
        {
            for(int i=2; i<11; i++)
            {
                if(a < b*i)
                {
                    mul = b*i;
                    cnt = mul-a;
                    cout << cnt << endl;
                    break;
                }
            }
        }
    }
}
