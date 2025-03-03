#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int out;

    while(t--)
    {
        int a,b,small;
        cin >> a >> b;

        if(a>b)
           small=a;
        else
            small=b;

        for(int i=small; ; i++)
        {
            if(i%a == i%b)
            {
               out = i;
               break;
            }
        }
        cout << out << endl;
    }



}
