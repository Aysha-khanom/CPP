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
        int a[n],evsum=0,odsum=0;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i+=2)
        {
            evsum+=a[i];
        }
        for(int i=1; i<n; i+=2)
        {
            odsum+=a[i];
        }

        cout << evsum-odsum << endl;

    }


}
