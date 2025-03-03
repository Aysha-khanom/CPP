#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string n;
        cin >> n;

        int cntZERO=0,cntONE=0,siz=n.size();
        for(int i=0; i<n.size(); i++)
        {
            if(n[i] == '0')
                cntZERO++;
            else
                cntONE++;
        }

        int output;
        for(int i=0; i<n.size(); i++)
        {
            if(n[i]=='1' && cntZERO!=0)
                cntZERO--;
            else if(n[i]=='0' && cntONE!=0)
                cntONE--;
            else if((cntONE==0 && n[i]=='0') || (cntZERO==0 && n[i]=='1'))
                output=siz-i;
            break;
        }
        cout << output  << endl;
    }

}
