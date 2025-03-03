#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            a.erase(i,3);
            i--;
        }
    }
    cout << a << endl;

}
