#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    int couna=0,counb=0,counc=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            couna++;
    }
     for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
            counb++;
    }
     for(int i=0; i<c.size(); i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
            counc++;
    }

    if(couna ==5 && counb ==7 && counc==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
