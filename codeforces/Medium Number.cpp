#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a>> b>> c;

        if((a>b && b>c) || (a<b && b<c))
            cout << b << endl;
        else if((b>a && a>c) || (b<a && a<c))
            cout << a << endl;
        else if((a>c && c>b) || (a<c && c<b))
            cout << c << endl;
    }


}
