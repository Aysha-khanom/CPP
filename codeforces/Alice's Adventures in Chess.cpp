#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,a,b,x=0,y=0;
        cin >> n >> a >> b;

        string p;
        cin >> p;

        int flag=0;
        for(int i=0; i<50 && !flag; i++)
        {
            for(int i=0; i<n; i++)
            {
                if(p[i]=='N') y+=1;
                else if(p[i]=='E') x+=1;
                else if(p[i]=='S') y-=1;
                else if(p[i]=='W') x-=1;

                if(x==a && y==b)

                {
                    flag = 1;
                    cout << "yes" << endl;
                    break;
                }
            }
        }
        if(flag == 0)
            cout << "no" << endl;
    }
}
