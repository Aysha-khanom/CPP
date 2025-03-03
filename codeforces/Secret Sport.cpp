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

        if(a[n-1] == 'A')
            cout << "A" << endl;
        else if(a[n-1] == 'B')
            cout << "B" << endl;
        else
            cout << "?" << endl;

    }
}
