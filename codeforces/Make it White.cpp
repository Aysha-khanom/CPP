#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        int found=-1,j,i,till=-1;
        for(i=0; i<n; i++)
        {
            if(a[i] == 'B')
            {
                found = i;
                break;
            }
        }
        for(j=n-1; j>=0; j--)
        {
            if(a[j] == 'B')
            {
                till = j;
                break;
            }
        }

        int out = till - found;
        if(found != -1 && till != -1)
            cout << out+1 << endl;
        else
            cout << 0 << endl;
    }
}
