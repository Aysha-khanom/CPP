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

        if(a[0] == 'a')
            cout << "yes" << endl;
        else if(a[1] == 'b')
            cout << "yes" << endl;
        else if(a[2] == 'c')
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
