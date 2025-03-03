#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin >> r >> c;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if((i%2==0) || (i%2!=0 && j==c-1))
                cout << "#";
            else
                cout << ".";
        }
         cout << endl;
         for(int j=0; j<c; j++)
        {
            if((i%2!=0 && j==0))
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }

}
