#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);

    set<char>s;
    int siz=0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!= '{' && a[i]!='}' && a[i]!=',' && a[i]!=' ')
            {
                s.insert(a[i]);
            }
    }
     siz = s.size();
    cout << siz << endl;


}
