#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;

        if(a == "Tetrahedron")
            sum+=4;
        else if(a == "Cube")
            sum+=6;
        else if( a== "Octahedron")
            sum+=8;
        else if( a== "Dodecahedron")
            sum+=12;
        else if( a== "Icosahedron")
            sum+=20;

    }
    cout << sum << endl;
}
