#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int siz=x.size();

            if(siz>=2 && x[siz-1] == 's' && x[siz-2] == 'u')
            {
               for(int i=0; i<=siz-3; i++)
            {
                cout << x[i];
            }
            cout << 'i';
            }

       else
            cout << x;

        cout << endl;
    }
}
