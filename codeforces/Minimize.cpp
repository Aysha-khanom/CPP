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
        int c,out=0;
        for(int c=a; c<=b; c++)
        {
            out = (c-a)+(b-c);
            if(out>=0 || out<=100)
            {
                cout << out << endl;
                break;
            }
        }


    }


}
