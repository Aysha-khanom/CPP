#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1;
    cin >> n;
    vector <int> vc(n);
    vector <int> vc2(n);

    for(int i=0; i<n; i++)
    {
        cin >> vc[i];
        vc[i] = abs(vc[i]);
        if(vc[i] == 0)
        {
            flag =0;
            break;
        }
    }
    if(flag == 0)
        cout << "0" << endl;
    else
    {
        sort(vc.begin(),vc.end());
        cout << vc[0];
    }
}
