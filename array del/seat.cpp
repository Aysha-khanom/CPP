#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,row,coun=0;
        cin >> n >> row;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(int i=1; i<n; i++)
        {
            if(a[i] == a[i-1])
                coun++;
            else
                i++;
        }

        cout << coun << endl;
    }


}
