#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;
        int coun=0;
        if(a[0]!='c')
        {
            coun++;
        }
        if(a[1]!='o')
        {
            coun++;
        }
        if(a[2]!='d')
        {
            coun++;
        }
        if(a[3]!='e')
        {
            coun++;
        }
        if(a[4]!='f')
        {
            coun++;
        }
        if(a[5] !='o')
        {
            coun++;
        }
        if(a[6]!='r')
        {
            coun++;
        }
        if(a[7] !='c')
        {
            coun++;
        }
        if(a[8]!='e')
        {
            coun++;
        }
        if(a[9] !='s')
        {
            coun++;
        }

        cout << coun <<endl;
    }

}
