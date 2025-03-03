#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        int o;
        cin >> n >> x >> y;

        if(x<y)
        {
            o = n/x;
                if(n%x > 0)
                    o+=1;
        }
        else
        {
            o=n/y;
            if(n%y > 0)
                o+=1;
        }
        cout << o << endl;

    }


}

