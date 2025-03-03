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
        int counta=0,countb=0;
        for(int i=0; i<a.size(); i++)
        {
          if(a[i] == 'A')
            counta++;
          else
            countb++;
        }

        if(counta > countb)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

}
