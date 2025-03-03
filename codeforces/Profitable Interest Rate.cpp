#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a>=b)
            cout << a << endl;
        else if(a<b)
        {
            for(int i=a-1; i>0; i--)
            {
                b-=2*a;
                if(i>=b)
                {
                    cout << i << endl;
                    break;
                }
            }
        }

    }

}
