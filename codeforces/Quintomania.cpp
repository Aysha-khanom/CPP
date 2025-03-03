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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int flag=0;
        for(int i=1; i<n; )
        {
            if(abs(a[i-1]-a[i]) == 5 || abs(a[i-1]-a[i]) ==7)
            {
                i++;
            }
            else
            {
                flag=1;
                break;
            }
        }

        if(flag == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

}
