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

        while(a!=0 && b!=0)
        {

            if(b>a)
            {
                swap (a,b);
                a--;
            }
            else if(a==b || a>b)
                a--;


            if(b<a)
            {
                swap (a,b);
                b--;
            }
            else if(a==b || a<b)
                b--;

        }

        if(a==0 && b==0)
            cout << "Bob" << endl;
        else if(b==0)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}
